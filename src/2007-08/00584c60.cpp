// from server: 58% by colin
// roc 2007-08 00584c60  unit: RBX::VHat::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00584c60
//
// 00584c60  53                   push ebx
// 00584c61  55                   push ebp
// 00584c62  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00584c68  56                   push esi
// 00584c69  8bf1                 mov esi, ecx
// 00584c6b  57                   push edi
// 00584c6c  8b7e04               mov edi, dword ptr [esi + 4]
// 00584c6f  3b7e08               cmp edi, dword ptr [esi + 8]
// 00584c72  7602                 jbe 0x584c76
// 00584c74  ffd5                 call ebp
// 00584c76  8b5e08               mov ebx, dword ptr [esi + 8]
// 00584c79  395e04               cmp dword ptr [esi + 4], ebx
// 00584c7c  7602                 jbe 0x584c80
// 00584c7e  ffd5                 call ebp
// 00584c80  3bfb                 cmp edi, ebx
// 00584c82  741d                 je 0x584ca1
// 00584c84  3b7e08               cmp edi, dword ptr [esi + 8]
// 00584c87  7202                 jb 0x584c8b
// 00584c89  ffd5                 call ebp
// 00584c8b  8b07                 mov eax, dword ptr [edi]
// 00584c8d  50                   push eax
// 00584c8e  8bce                 mov ecx, esi
// 00584c90  e85bfeffff           call 0x584af0
// 00584c95  3b7e08               cmp edi, dword ptr [esi + 8]
// 00584c98  7202                 jb 0x584c9c
// 00584c9a  ffd5                 call ebp
// 00584c9c  83c704               add edi, 4
// 00584c9f  ebdf                 jmp 0x584c80
// 00584ca1  5f                   pop edi
// 00584ca2  5e                   pop esi
// 00584ca3  5d                   pop ebp
// 00584ca4  5b                   pop ebx
// 00584ca5  c3                   ret 

struct S {
    void f();
    void process(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void S::f() {
    int* begin = *(int**)((char*)this + 4);
    int* end = *(int**)((char*)this + 8);
    if (begin > end) {
        _invalid_parameter_noinfo();
    }
    int* cur = *(int**)((char*)this + 8);
    if (*(int**)((char*)this + 4) > cur) {
        _invalid_parameter_noinfo();
    }
    while (begin != cur) {
        if (begin >= *(int**)((char*)this + 8)) {
            _invalid_parameter_noinfo();
        }
        int v = *begin;
        process(v);
        if (begin >= *(int**)((char*)this + 8)) {
            _invalid_parameter_noinfo();
        }
        begin++;
    }
}
