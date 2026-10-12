// from server: 100% by king_originala
// roc 2008-06 00542990  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00542990
//
// 00542990  55                   push ebp
// 00542991  8bec                 mov ebp, esp
// 00542993  51                   push ecx
// 00542994  894dfc               mov dword ptr [ebp - 4], ecx
// 00542997  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054299a  e871faebff           call 0x402410
// 0054299f  0fb6c0               movzx eax, al
// 005429a2  85c0                 test eax, eax
// 005429a4  7506                 jne 0x5429ac
// 005429a6  ff1590288000         call dword ptr [0x802890]
// 005429ac  33c9                 xor ecx, ecx
// 005429ae  75fc                 jne 0x5429ac
// 005429b0  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005429b3  e848faebff           call 0x402400
// 005429b8  8b55fc               mov edx, dword ptr [ebp - 4]
// 005429bb  8b4a04               mov ecx, dword ptr [edx + 4]
// 005429be  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 005429c1  7206                 jb 0x5429c9
// 005429c3  ff1590288000         call dword ptr [0x802890]
// 005429c9  33d2                 xor edx, edx
// 005429cb  75fc                 jne 0x5429c9
// 005429cd  8b45fc               mov eax, dword ptr [ebp - 4]
// 005429d0  8b4004               mov eax, dword ptr [eax + 4]
// 005429d3  8be5                 mov esp, ebp
// 005429d5  5d                   pop ebp
// 005429d6  c3                   ret 

#pragma optimize("", off)

extern "C" void (__cdecl * _imp__invalid_parameter_noinfo)();

struct Container {
    unsigned char padding[16];
    unsigned limit;
};

struct Iterator {
    void *proxy;
    unsigned position;

    bool _Has_container() const;
    const Container *_Getmycont() const;
    unsigned get() const;
};

unsigned Iterator::get() const
{
    if (!_Has_container())
        _imp__invalid_parameter_noinfo();
    do {
    } while (0);

    if (!(position < _Getmycont()->limit))
        _imp__invalid_parameter_noinfo();
    do {
    } while (0);

    return position;
}
