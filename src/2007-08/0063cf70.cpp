// from server: 56% by colin
// roc 2007-08 0063cf70  unit: CXTPPaintManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cf70
//
// 0063cf70  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0063cf74  50                   push eax
// 0063cf75  8bd1                 mov edx, ecx
// 0063cf77  e8f4fdffff           call 0x63cd70
// 0063cf7c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063cf80  50                   push eax
// 0063cf81  51                   push ecx
// 0063cf82  8bca                 mov ecx, edx
// 0063cf84  e8e7fdffff           call 0x63cd70
// 0063cf89  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063cf8d  50                   push eax
// 0063cf8e  8d542410             lea edx, [esp + 0x10]
// 0063cf92  52                   push edx
// 0063cf93  e81239ffff           call 0x6308aa
// 0063cf98  c21c00               ret 0x1c

struct CXTPPaintManager {
    int sub_63CD70(int);
    int sub_6308AA(int*, int);
    int func(int, int, int, int, int, int, int);
};

int CXTPPaintManager::func(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    int v = sub_63CD70(a7);
    int w = sub_63CD70(a5);
    int result;
    sub_6308AA(&result, w);
    return result;
}
