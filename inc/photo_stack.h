#ifndef PHOTO_STACK_H
#define PHOTO_STACK_H

// Incomplete Type
typedef struct Photo *photo_t;

photo_t NewPhotoStack();

static void PhotoPush(photo_t, const int);
static int PhotoPop(photo_t);
static int PhotoIsFull(photo_t);
static int PhotoIsEmpty(photo_t);

#endif
