// from server: 100% by king_originala
// roc 2008-06 00544570  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544570
//
// 00544570  55                   push ebp
// 00544571  8bec                 mov ebp, esp
// 00544573  83ec0c               sub esp, 0xc
// 00544576  894df4               mov dword ptr [ebp - 0xc], ecx
// 00544579  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054457c  8b08                 mov ecx, dword ptr [eax]
// 0054457e  8b5004               mov edx, dword ptr [eax + 4]
// 00544581  894df8               mov dword ptr [ebp - 8], ecx
// 00544584  8955fc               mov dword ptr [ebp - 4], edx
// 00544587  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054458a  e861e3ffff           call 0x5428f0
// 0054458f  8b4508               mov eax, dword ptr [ebp + 8]
// 00544592  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00544595  8908                 mov dword ptr [eax], ecx
// 00544597  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054459a  895004               mov dword ptr [eax + 4], edx
// 0054459d  8b4508               mov eax, dword ptr [ebp + 8]
// 005445a0  8be5                 mov esp, ebp
// 005445a2  5d                   pop ebp
// 005445a3  c20800               ret 8

struct S {
    void* first;
    void* second;

    S& operator++();
    S operator++(int);
};

#pragma optimize("", off)
S S::operator++(int)
{
    S previous = *this;
    ++*this;
    return previous;
}
#pragma optimize("", on)
