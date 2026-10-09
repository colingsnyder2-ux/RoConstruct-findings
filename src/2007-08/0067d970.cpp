// from server: 80% by colin
// roc 2007-08 0067d970  unit: CXTPControlLabel  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d970
//
// 0067d970  837c240400           cmp dword ptr [esp + 4], 0
// 0067d975  56                   push esi
// 0067d976  8bf1                 mov esi, ecx
// 0067d978  7552                 jne 0x67d9cc
// 0067d97a  e8f1c5fbff           call 0x639f70
// 0067d97f  85c0                 test eax, eax
// 0067d981  7449                 je 0x67d9cc
// 0067d983  8b06                 mov eax, dword ptr [esi]
// 0067d985  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 0067d98b  8bce                 mov ecx, esi
// 0067d98d  ffd2                 call edx
// 0067d98f  85c0                 test eax, eax
// 0067d991  7439                 je 0x67d9cc
// 0067d993  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0067d999  6a00                 push 0
// 0067d99b  6aff                 push -1
// 0067d99d  e8ce80fcff           call 0x645a70
// 0067d9a2  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0067d9a8  8b01                 mov eax, dword ptr [ecx]
// 0067d9aa  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0067d9b0  6a00                 push 0
// 0067d9b2  6aff                 push -1
// 0067d9b4  ffd2                 call edx
// 0067d9b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067d9ba  8b06                 mov eax, dword ptr [esi]
// 0067d9bc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0067d9c0  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 0067d9c6  51                   push ecx
// 0067d9c7  52                   push edx
// 0067d9c8  8bce                 mov ecx, esi
// 0067d9ca  ffd0                 call eax
// 0067d9cc  5e                   pop esi
// 0067d9cd  c20c00               ret 0xc

struct CXTPControlLabel {
    void f(int, int, int);
};

extern "C" int __cdecl sub_00639f70();
extern "C" void __cdecl sub_00645a70(void *, int, int);

void CXTPControlLabel::f(int a1, int a2, int a3)
{
    if (a1 != 0)
        return;

    if (sub_00639f70() == 0)
        return;

    if (((int (__thiscall *)(CXTPControlLabel *))*(int *)(*(int *)this + 0x128))(this) == 0)
        return;

    sub_00645a70(*(void **)((char *)this + 0xfc), -1, 0);
    ((void (__thiscall *)(void *, int, int))*(int *)(*(int *)(*(int *)((char *)this + 0xfc)) + 0x148))(*(void **)((char *)this + 0xfc), -1, 0);
    ((void (__thiscall *)(CXTPControlLabel *, int, int))*(int *)(*(int *)this + 0x108))(this, a2, a3);
}
