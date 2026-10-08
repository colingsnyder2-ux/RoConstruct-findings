// from server: 100% by colin
// roc 2007-08 006a3940  unit: CXTPKeyboardManager  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3940
//
// 006a3940  83791000             cmp dword ptr [ecx + 0x10], 0
// 006a3944  7505                 jne 0x6a394b
// 006a3946  33c0                 xor eax, eax
// 006a3948  c20400               ret 4
// 006a394b  8b442404             mov eax, dword ptr [esp + 4]
// 006a394f  85c0                 test eax, eax
// 006a3951  7508                 jne 0x6a395b
// 006a3953  b801000000           mov eax, 1
// 006a3958  c20400               ret 4
// 006a395b  83b82801000000       cmp dword ptr [eax + 0x128], 0
// 006a3962  7fef                 jg 0x6a3953
// 006a3964  50                   push eax
// 006a3965  83c108               add ecx, 8
// 006a3968  e853feffff           call 0x6a37c0
// 006a396d  33c9                 xor ecx, ecx
// 006a396f  83f8ff               cmp eax, -1
// 006a3972  0f94c1               sete cl
// 006a3975  8bc1                 mov eax, ecx
// 006a3977  c20400               ret 4

struct CXTPKeyboardManager {
    int unknown0;
    int unknown4;
    int field8;
    int fieldC;
    int field10;
    int sub_6a37c0(int);
    int func(int);
};

int CXTPKeyboardManager::func(int arg) {
    if (field10 == 0)
        return 0;
    if (arg == 0)
        return 1;
    if (*(int*)(arg + 0x128) > 0)
        return 1;
    int r = ((CXTPKeyboardManager*)((char*)this + 8))->sub_6a37c0(arg);
    return r == -1 ? 1 : 0;
}
