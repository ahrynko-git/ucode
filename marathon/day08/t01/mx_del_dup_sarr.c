#include "duplicate.h"
#include <stdio.h>

t_intarr *mx_del_dup_arr(t_intarr *src) {
t_intarr *dst = NULL;

dst = malloc(sizeof(t_intarr));
if(src == NULL)
	return NULL;
for (int i = 0; i < src->size; i++)
	for (int j = i + 1; j < src->size; j++) {
		if (src->arr[i] == src->arr[j]) {
			for (int k = j; k < src->size - 1; k++)
				src->arr[k] = src->arr[k + 1];
			src->size--;

			if (src->arr[i] == src->arr[j])
			j--;
		}
	}
dst->size = src->size;
dst->arr = (int *)malloc(sizeof(int)* src->size);
dst->size = src->size;

if (dst->arr)
	for (int i = 0; i < src->size; i++)
		dst->arr[i] = src->arr[i];
return dst;
}
