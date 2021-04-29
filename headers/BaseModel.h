#include <stdio.h>
#include "Contact.h"

#ifndef BASE_MODEL_FILE
#define BASE_MODEL_FILE

char *filePath;

struct Contact createElement(struct Contact newContact);
struct Contact findElement(struct Contact query);
struct Contact updateElement(struct Contact query, struct Contact newData);
struct Contact deleteElement(struct Contact query);

#endif
