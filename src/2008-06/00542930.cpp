// from server: 100% by king_originala
// roc 2008-06 00542930  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00542930
//
// 00542930  55                   push ebp
// 00542931  8bec                 mov ebp, esp
// 00542933  51                   push ecx
// 00542934  894dfc               mov dword ptr [ebp - 4], ecx
// 00542937  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054293a  e8d1faebff           call 0x402410
// 0054293f  0fb6c0               movzx eax, al
// 00542942  85c0                 test eax, eax
// 00542944  7506                 jne 0x54294c
// 00542946  ff1590288000         call dword ptr [0x802890]
// 0054294c  33c9                 xor ecx, ecx
// 0054294e  75fc                 jne 0x54294c
// 00542950  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00542953  e8a8faebff           call 0x402400
// 00542958  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054295b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0054295e  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 00542961  7206                 jb 0x542969
// 00542963  ff1590288000         call dword ptr [0x802890]
// 00542969  33d2                 xor edx, edx
// 0054296b  75fc                 jne 0x542969
// 0054296d  8b45fc               mov eax, dword ptr [ebp - 4]
// 00542970  8b4804               mov ecx, dword ptr [eax + 4]
// 00542973  83c128               add ecx, 0x28
// 00542976  8b55fc               mov edx, dword ptr [ebp - 4]
// 00542979  894a04               mov dword ptr [edx + 4], ecx
// 0054297c  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054297f  8be5                 mov esp, ebp
// 00542981  5d                   pop ebp
// 00542982  c3                   ret 

#pragma optimize("", off)

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Element {
    char data[40];
};

struct Container {
    char padding[16];
    Element* end;
};

struct S {
    void* container;
    Element* current;

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
