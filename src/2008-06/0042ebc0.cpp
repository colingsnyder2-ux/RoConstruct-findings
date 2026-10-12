// from server: 100% by king_originala
// roc 2008-06 0042ebc0  unit: CWrapperView  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ebc0
//
// 0042ebc0  8b442404             mov eax, dword ptr [esp + 4]
// 0042ebc4  53                   push ebx
// 0042ebc5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0042ebc9  55                   push ebp
// 0042ebca  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0042ebce  56                   push esi
// 0042ebcf  57                   push edi
// 0042ebd0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0042ebd4  57                   push edi
// 0042ebd5  53                   push ebx
// 0042ebd6  55                   push ebp
// 0042ebd7  50                   push eax
// 0042ebd8  8bf1                 mov esi, ecx
// 0042ebda  e8731e2700           call 0x6a0a52
// 0042ebdf  85c0                 test eax, eax
// 0042ebe1  740c                 je 0x42ebef
// 0042ebe3  5f                   pop edi
// 0042ebe4  5e                   pop esi
// 0042ebe5  5d                   pop ebp
// 0042ebe6  b801000000           mov eax, 1
// 0042ebeb  5b                   pop ebx
// 0042ebec  c21000               ret 0x10
// 0042ebef  8b5658               mov edx, dword ptr [esi + 0x58]
// 0042ebf2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042ebf6  8b5214               mov edx, dword ptr [edx + 0x14]
// 0042ebf9  57                   push edi
// 0042ebfa  53                   push ebx
// 0042ebfb  8d4e58               lea ecx, [esi + 0x58]
// 0042ebfe  55                   push ebp
// 0042ebff  50                   push eax
// 0042ec00  ffd2                 call edx
// 0042ec02  5f                   pop edi
// 0042ec03  5e                   pop esi
// 0042ec04  5d                   pop ebp
// 0042ec05  5b                   pop ebx
// 0042ec06  c21000               ret 0x10

typedef int (__thiscall *DispatchFn)(void *, int, int, int, int);

struct CWrapperView {
    char padding[0x58];
    struct {
        DispatchFn *vtable;
    } target;

    int BaseDispatch(int, int, int, int);
    int Dispatch(int, int, int, int);
};

int CWrapperView::Dispatch(int a, int b, int c, int d) {
    if (BaseDispatch(a, b, c, d))
        return 1;
    return target.vtable[5](&target, a, b, c, d);
}
