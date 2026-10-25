// from server: 100% by king_originala
// roc 2008-06 00542710  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00542710
//
// 00542710  55                   push ebp
// 00542711  8bec                 mov ebp, esp
// 00542713  51                   push ecx
// 00542714  894dfc               mov dword ptr [ebp - 4], ecx
// 00542717  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054271a  e8f1fcebff           call 0x402410
// 0054271f  0fb6c0               movzx eax, al
// 00542722  85c0                 test eax, eax
// 00542724  7506                 jne 0x54272c
// 00542726  ff1590288000         call dword ptr [0x802890]
// 0054272c  33c9                 xor ecx, ecx
// 0054272e  75fc                 jne 0x54272c
// 00542730  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00542733  e8c8fcebff           call 0x402400
// 00542738  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054273b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0054273e  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 00542741  7206                 jb 0x542749
// 00542743  ff1590288000         call dword ptr [0x802890]
// 00542749  33d2                 xor edx, edx
// 0054274b  75fc                 jne 0x542749
// 0054274d  8b45fc               mov eax, dword ptr [ebp - 4]
// 00542750  8b4804               mov ecx, dword ptr [eax + 4]
// 00542753  83c104               add ecx, 4
// 00542756  8b55fc               mov edx, dword ptr [ebp - 4]
// 00542759  894a04               mov dword ptr [edx + 4], ecx
// 0054275c  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054275f  8be5                 mov esp, ebp
// 00542761  5d                   pop ebp
// 00542762  c3                   ret 

#pragma optimize("", off)

extern "C" void (__cdecl * _invalid_parameter_noinfo)();

struct Container {
    unsigned int reserved[4];
    void** end;
};

struct S {
    void* proxy;
    void** current;

    bool _Has_container() const;
    const Container* _Getmycont() const;
    S& f();
};

S& S::f() {
    if (!_Has_container())
        _invalid_parameter_noinfo();
    do {
    } while (0);

    if (!(current < _Getmycont()->end))
        _invalid_parameter_noinfo();
    do {
    } while (0);

    ++current;
    return *this;
}
