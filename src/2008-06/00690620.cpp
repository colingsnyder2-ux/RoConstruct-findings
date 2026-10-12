// from server: 92% by king_originala
struct Light;
struct Less {};

typedef bool (__thiscall *CompareFunction)(
    const Less *, const Light *, const Light *);
typedef int (__cdecl *MoveFunction)(
    void *, unsigned int, const void *, unsigned int);

extern CompareFunction compareLights;
extern MoveFunction moveMemory;

Light **__cdecl mergeLights(
    Light **first1, Light **last1,
    Light **first2, Light **last2,
    Light **result, Less compare)
{
    while (first1 != last1 && first2 != last2) {
        if (compareLights(&compare, *first2, *first1))
            *result = *first2++;
        else
            *result = *first1++;
        ++result;
    }

    int count1 = last1 - first1;
    Light **middle = result + count1;
    MoveFunction move = moveMemory;
    if (count1 > 0) {
        unsigned int bytes = count1 * sizeof(Light *);
        move(result, bytes, first1, bytes);
    }

    int count2 = last2 - first2;
    Light **finish = middle + count2;
    if (count2 > 0) {
        unsigned int bytes = count2 * sizeof(Light *);
        move(middle, bytes, first2, bytes);
    }
    return finish;
}
