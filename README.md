# System-Programming

## Custom unix utility
after studying process behaviour and Universal I/O model we can build our custom unix utility/commands.

  ### pwd 
  display the current directory
  ```
  the original command:
      pwd
  custom:
      gcc mypwd.c -o xmypwd
      ./xmypwd
  ```

  ### cat
  dispaly the file content
  ```
  the original command:
      cat
  custom:
      gcc mycat.c -o xmycat
      ./xmycat
  ```

  ### echo
  dispaly the input string it takes
  ```
  the original command:
      echo
  custom:
      gcc myecho.c -o xmyecho
      ./xmyecho
  ```

  ### cp
  copy the source file content into the destination
  ```
  the original command:
      cp
  custom:
      gcc mycp.c -o xmycp
      ./xmycp
  ```

  ### mv
  move the file from source to destination
  ```
  the original command:
      mv
  custom:
      gcc mymv.c -o xmymv
      ./xmymv
  ```

