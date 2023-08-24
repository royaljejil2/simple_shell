# Simple Shell Project

**Authors:** Jesse Adjar and Diana Ntow

## Introduction

Welcome to the Simple Shell Project! This project is a basic implementation of a Unix-like shell in C, created by Jesse Adjar and Diana Ntow. A shell is a command-line interface that allows users to interact with the operating system by entering commands.

In this README file, we will provide you with information on how to compile and use our simple shell, along with some basic commands and features.

## Getting Started

To use the Simple Shell Project, follow these steps:

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/jesseadjar/simple-shell.git
   ```

2. Navigate to the project directory:

   ```bash
   cd simple-shell
   ```

3. Compile the shell:

   ```bash
   gcc -o shell shell.c
   ```

4. Run the shell:

   ```bash
   ./shell
   ```

You should now be in the Simple Shell environment, ready to enter commands.

## Features

Our Simple Shell Project supports the following basic features:

- Running simple commands like `ls`, `pwd`, `echo`, and more.
- Handling basic command-line arguments.
- Piping commands together using the `|` operator.
- Redirecting input and output with `<` and `>` operators.
- Background execution of commands with `&`.
- Handling built-in commands such as `cd`.

## Usage

### Running Commands

To run a command, simply enter it and press Enter. For example:

```bash
ls -l
```

### Piping Commands

You can pipe commands together using the `|` operator. For example:

```bash
ls -l | grep myfile
```

### Redirecting Input and Output

You can redirect input and output using the `<` and `>` operators. For example:

```bash
cat < input.txt > output.txt
```

### Background Execution

To run a command in the background, use the `&` symbol. For example:

```bash
sleep 10 &
```

### Built-in Commands

The shell also supports some built-in commands, including:

- `cd`: Change the current directory.
- `exit`: Exit the shell.

## Troubleshooting

If you encounter any issues while using the Simple Shell Project, please check the following:

- Ensure that you have compiled the shell successfully.
- Check for any syntax errors in your commands.
- Make sure you are using the correct operators for piping and redirection.

## Contributions

We welcome contributions to the Simple Shell Project! If you'd like to contribute, please fork the repository, make your changes, and submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

If you have any questions or feedback, feel free to contact the authors:

- Jesse Adjar: royaljejil2@yahoo.com
- Diana Ntow: dianasenakey@gmail.com

Thank you for using our Simple Shell! We hope you find it useful and enjoy using it.
