// from server: 87% by colin
// roc 2007-08 00456070  unit: LockPlayModeVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00456070
//
// 00456070  e88d9e1d00           call 0x62ff02
// 00456075  8b4004               mov eax, dword ptr [eax + 4]
// 00456078  8b4020               mov eax, dword ptr [eax + 0x20]
// 0045607b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0045607e  6a00                 push 0
// 00456080  68ff800000           push 0x80ff
// 00456085  6811010000           push 0x111
// 0045608a  51                   push ecx
// 0045608b  ff15d0ec7700         call dword ptr [0x77ecd0]
// 00456091  c20400               ret 4

extern "C" void* __cdecl sub_0062FF02();
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct S_func_00456070 {
    void f(int);
};

void S_func_00456070::f(int a)
{
    char* p = (char*)sub_0062FF02();
    p = *(char**)(p + 4);
    p = *(char**)(p + 0x20);
    int hwnd = *(int*)(p + 0x20);
    PostMessageA((void*)hwnd, 0x111, 0x80ff, 0);
}
