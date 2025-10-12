## GitHub

### Инициализировать репозиторий
```bash
git init
```

### Взять репозиторий из GitHub
**Способ 1:**
```bash
git init
git remote add origin <ссылка>
git pull origin main
```

**Способ 2:**
```bash
git clone <ссылка-на-репозиторий>
```

### Работа с коммитами
```bash
git add -A                    # Добавить все файлы
git add .                     # Добавить все файлы в текущей директории
git add filename.txt          # Добавить конкретный файл

git commit -m "Сообщение"     # Создать коммит с сообщением
git commit -am "Сообщение"    # Добавить и закоммитить отслеживаемые файлы
```

### Синхронизация с GitHub
```bash
git push origin main          # Отправить коммиты на GitHub
git pull origin main          # Забрать изменения с GitHub
git fetch origin              # Скачать изменения без слияния
```

### Проверка статуса
```bash
git status                    # Текущее состояние
git log                       # История коммитов
git remote -v                 # Список удаленных репозиториев
```
