// from server: 100% by king_originala
// roc 2008-06 00541540  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541540
//
// 00541540  55                   push ebp
// 00541541  8bec                 mov ebp, esp
// 00541543  51                   push ecx
// 00541544  894dfc               mov dword ptr [ebp - 4], ecx
// 00541547  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054154a  83c008               add eax, 8
// 0054154d  50                   push eax
// 0054154e  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00541551  51                   push ecx
// 00541552  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00541555  52                   push edx
// 00541556  8b4508               mov eax, dword ptr [ebp + 8]
// 00541559  50                   push eax
// 0054155a  e8f1490000           call 0x545f50
// 0054155f  83c410               add esp, 0x10
// 00541562  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00541565  8b5508               mov edx, dword ptr [ebp + 8]
// 00541568  8d048a               lea eax, [edx + ecx*4]
// 0054156b  8be5                 mov esp, ebp
// 0054156d  5d                   pop ebp
// 0054156e  c20c00               ret 0xc

#pragma optimize("", off)

extern "C" void __cdecl helper(int *, unsigned, int, void *);

struct S {
    int *f(int *first, unsigned count, int value);
};

int *S::f(int *first, unsigned count, int value)
{
    helper(first, count, value, reinterpret_cast<char *>(this) + 8);
    return first + count;
}
