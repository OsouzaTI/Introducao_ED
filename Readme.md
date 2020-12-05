## Principais Erros no console
-   printf no vscode com erros de acentuação

    -   Solução 1: adicione o header <locale.h> e adicione
        o código setLocale(LC_ALL, "Portuguese") no main
        
    -   Solução 2: Salve o arquivo no encode Windows-1252