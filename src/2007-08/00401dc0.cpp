// from server: 83% by colin
// roc 2007-08 00401dc0  unit: VCWorkspace::?$CComObject  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401dc0
//
// 00401dc0  8b442404             mov eax, dword ptr [esp + 4]
// 00401dc4  83f864               cmp eax, 0x64
// 00401dc7  56                   push esi
// 00401dc8  8bf1                 mov esi, ecx
// 00401dca  7d05                 jge 0x401dd1
// 00401dcc  b8e8030000           mov eax, 0x3e8
// 00401dd1  33c9                 xor ecx, ecx
// 00401dd3  c70600000000         mov dword ptr [esi], 0
// 00401dd9  894604               mov dword ptr [esi + 4], eax
// 00401ddc  7705                 ja 0x401de3
// 00401dde  83f8ff               cmp eax, -1
// 00401de1  7604                 jbe 0x401de7
// 00401de3  33c0                 xor eax, eax
// 00401de5  eb07                 jmp 0x401dee
// 00401de7  50                   push eax
// 00401de8  ff1524f07700         call dword ptr [0x77f024]
// 00401dee  85c0                 test eax, eax
// 00401df0  894608               mov dword ptr [esi + 8], eax
// 00401df3  7403                 je 0x401df8
// 00401df5  c60000               mov byte ptr [eax], 0
// 00401df8  8bc6                 mov eax, esi
// 00401dfa  5e                   pop esi
// 00401dfb  c20400               ret 4

struct VCWorkspaceCComObject {
    int field0;
    unsigned int field4;
    char* field8;
    VCWorkspaceCComObject* construct(unsigned int size);
};

extern "C" void* __stdcall CoTaskMemAlloc(unsigned int cb);

VCWorkspaceCComObject* VCWorkspaceCComObject::construct(unsigned int size)
{
    if ((int)size < 0x64) {
        size = 0x3e8;
    }
    field0 = 0;
    field4 = size;
    char* p;
    if ((int)size > -1 && size <= 0xfffffffeu) {
        p = (char*)CoTaskMemAlloc(size);
    } else {
        p = 0;
    }
    field8 = p;
    if (p != 0) {
        *p = 0;
    }
    return this;
}
