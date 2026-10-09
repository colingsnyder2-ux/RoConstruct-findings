// from server: 19% by colin
// roc 2007-08 00430b40  unit: CWrapperView  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430b40
//
// 00430b40  55                   push ebp
// 00430b41  8bec                 mov ebp, esp
// 00430b43  6aff                 push -1
// 00430b45  68d1d97300           push 0x73d9d1
// 00430b4a  64a100000000         mov eax, dword ptr fs:[0]
// 00430b50  50                   push eax
// 00430b51  83ec30               sub esp, 0x30
// 00430b54  a188518b00           mov eax, dword ptr [0x8b5188]
// 00430b59  33c5                 xor eax, ebp
// 00430b5b  8945ec               mov dword ptr [ebp - 0x14], eax
// 00430b5e  53                   push ebx
// 00430b5f  56                   push esi
// 00430b60  57                   push edi
// 00430b61  50                   push eax
// 00430b62  8d45f4               lea eax, [ebp - 0xc]
// 00430b65  64a300000000         mov dword ptr fs:[0], eax
// 00430b6b  8965f0               mov dword ptr [ebp - 0x10], esp
// 00430b6e  8b7508               mov esi, dword ptr [ebp + 8]
// 00430b71  8bc1                 mov eax, ecx
// 00430b73  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00430b76  8b11                 mov edx, dword ptr [ecx]
// 00430b78  56                   push esi
// 00430b79  50                   push eax
// 00430b7a  8b02                 mov eax, dword ptr [edx]
// 00430b7c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00430b83  ffd0                 call eax

struct CWrapperView {
    void f(int, void*);
};

void CWrapperView::f(int a, void* b) {
    void** vtbl = *(void***)b;
    void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0];
    fn(b, a);
}
