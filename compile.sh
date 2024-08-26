SCRIPT_DIR=$(dirname "$(realpath "$0")")
cd "$SCRIPT_DIR" || exit

gcc -o primechecker primechecker.c

if [ $? -eq 0 ]; then
    echo "Compilation successful. Executable 'primechecker' created."
else
    echo "Compilation failed."
fi

