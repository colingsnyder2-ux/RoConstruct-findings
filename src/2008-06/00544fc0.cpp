// from server: 100% by king_originala
// roc 2008-06 00544fc0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544fc0
//
// 00544fc0  55                   push ebp
// 00544fc1  8bec                 mov ebp, esp
// 00544fc3  83ec08               sub esp, 8
// 00544fc6  56                   push esi
// 00544fc7  894df8               mov dword ptr [ebp - 8], ecx
// 00544fca  8b4508               mov eax, dword ptr [ebp + 8]
// 00544fcd  50                   push eax
// 00544fce  e8cdcdffff           call 0x541da0
// 00544fd3  83c404               add esp, 4
// 00544fd6  8b08                 mov ecx, dword ptr [eax]
// 00544fd8  894dfc               mov dword ptr [ebp - 4], ecx
// 00544fdb  8b55fc               mov edx, dword ptr [ebp - 4]
// 00544fde  52                   push edx
// 00544fdf  e84c760000           call 0x54c630
// 00544fe4  83c404               add esp, 4
// 00544fe7  8bf0                 mov esi, eax
// 00544fe9  8b4508               mov eax, dword ptr [ebp + 8]
// 00544fec  50                   push eax
// 00544fed  e8aecdffff           call 0x541da0
// 00544ff2  83c404               add esp, 4
// 00544ff5  8b0e                 mov ecx, dword ptr [esi]
// 00544ff7  8908                 mov dword ptr [eax], ecx
// 00544ff9  8b55fc               mov edx, dword ptr [ebp - 4]
// 00544ffc  52                   push edx
// 00544ffd  e82e760000           call 0x54c630
// 00545002  83c404               add esp, 4
// 00545005  8b00                 mov eax, dword ptr [eax]
// 00545007  50                   push eax
// 00545008  e8f3ddffff           call 0x542e00
// 0054500d  83c404               add esp, 4
// 00545010  0fbe08               movsx ecx, byte ptr [eax]
// 00545013  85c9                 test ecx, ecx
// 00545015  751c                 jne 0x545033
// 00545017  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054501a  52                   push edx
// 0054501b  e810760000           call 0x54c630
// 00545020  83c404               add esp, 4
// 00545023  8b00                 mov eax, dword ptr [eax]
// 00545025  50                   push eax
// 00545026  e815760000           call 0x54c640
// 0054502b  83c404               add esp, 4
// 0054502e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00545031  8908                 mov dword ptr [eax], ecx
// 00545033  8b5508               mov edx, dword ptr [ebp + 8]
// 00545036  52                   push edx
// 00545037  e804760000           call 0x54c640
// 0054503c  83c404               add esp, 4
// 0054503f  8bf0                 mov esi, eax
// 00545041  8b45fc               mov eax, dword ptr [ebp - 4]
// 00545044  50                   push eax
// 00545045  e8f6750000           call 0x54c640
// 0054504a  83c404               add esp, 4
// 0054504d  8b0e                 mov ecx, dword ptr [esi]
// 0054504f  8908                 mov dword ptr [eax], ecx
// 00545051  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00545054  e897d3ffff           call 0x5423f0
// 00545059  8b5508               mov edx, dword ptr [ebp + 8]
// 0054505c  3b10                 cmp edx, dword ptr [eax]
// 0054505e  750f                 jne 0x54506f
// 00545060  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00545063  e888d3ffff           call 0x5423f0
// 00545068  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054506b  8908                 mov dword ptr [eax], ecx
// 0054506d  eb58                 jmp 0x5450c7
// 0054506f  8b5508               mov edx, dword ptr [ebp + 8]
// 00545072  52                   push edx
// 00545073  e8c8750000           call 0x54c640
// 00545078  83c404               add esp, 4
// 0054507b  8b00                 mov eax, dword ptr [eax]
// 0054507d  50                   push eax
// 0054507e  e8ad750000           call 0x54c630
// 00545083  83c404               add esp, 4
// 00545086  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00545089  3b08                 cmp ecx, dword ptr [eax]
// 0054508b  751e                 jne 0x5450ab
// 0054508d  8b5508               mov edx, dword ptr [ebp + 8]
// 00545090  52                   push edx
// 00545091  e8aa750000           call 0x54c640
// 00545096  83c404               add esp, 4
// 00545099  8b00                 mov eax, dword ptr [eax]
// 0054509b  50                   push eax
// 0054509c  e88f750000           call 0x54c630
// 005450a1  83c404               add esp, 4
// 005450a4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005450a7  8908                 mov dword ptr [eax], ecx
// 005450a9  eb1c                 jmp 0x5450c7
// 005450ab  8b5508               mov edx, dword ptr [ebp + 8]
// 005450ae  52                   push edx
// 005450af  e88c750000           call 0x54c640
// 005450b4  83c404               add esp, 4
// 005450b7  8b00                 mov eax, dword ptr [eax]
// 005450b9  50                   push eax
// 005450ba  e8e1ccffff           call 0x541da0
// 005450bf  83c404               add esp, 4
// 005450c2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005450c5  8908                 mov dword ptr [eax], ecx
// 005450c7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005450ca  52                   push edx
// 005450cb  e860750000           call 0x54c630
// 005450d0  83c404               add esp, 4
// 005450d3  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005450d6  8908                 mov dword ptr [eax], ecx
// 005450d8  8b5508               mov edx, dword ptr [ebp + 8]
// 005450db  52                   push edx
// 005450dc  e85f750000           call 0x54c640
// 005450e1  83c404               add esp, 4
// 005450e4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005450e7  8908                 mov dword ptr [eax], ecx
// 005450e9  5e                   pop esi
// 005450ea  8be5                 mov esp, ebp
// 005450ec  5d                   pop ebp
// 005450ed  c20400               ret 4

#pragma optimize("", off)

struct VChunk;

extern "C" char* __cdecl link8(VChunk*);
extern "C" char* __cdecl flag29(VChunk*);
extern "C" void* __cdecl link0(void*);
extern "C" void* __cdecl link4(VChunk*);

struct S {
    VChunk** root();
    void f(VChunk*);
};

void S::f(VChunk* p)
{
    VChunk* q = *(VChunk**)link8(p);

    *(VChunk**)link8(p) = *(VChunk**)link0(q);

    if (*flag29(*(VChunk**)link0(q)) == 0)
        *(VChunk**)link4(*(VChunk**)link0(q)) = p;

    *(VChunk**)link4(q) = *(VChunk**)link4(p);

    if (p == *root())
        *root() = q;
    else if (p == *(VChunk**)link0(*(VChunk**)link4(p)))
        *(VChunk**)link0(*(VChunk**)link4(p)) = q;
    else
        *(VChunk**)link8(*(VChunk**)link4(p)) = q;

    *(VChunk**)link0(q) = p;
    *(VChunk**)link4(p) = q;
}
