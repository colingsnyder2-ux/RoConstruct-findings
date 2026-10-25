// from server: 100% by king_originala
// roc 2008-06 00544070  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544070
//
// 00544070  55                   push ebp
// 00544071  8bec                 mov ebp, esp
// 00544073  83ec08               sub esp, 8
// 00544076  56                   push esi
// 00544077  894df8               mov dword ptr [ebp - 8], ecx
// 0054407a  8b4508               mov eax, dword ptr [ebp + 8]
// 0054407d  50                   push eax
// 0054407e  e8ad850000           call 0x54c630
// 00544083  83c404               add esp, 4
// 00544086  8b08                 mov ecx, dword ptr [eax]
// 00544088  894dfc               mov dword ptr [ebp - 4], ecx
// 0054408b  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054408e  52                   push edx
// 0054408f  e80cddffff           call 0x541da0
// 00544094  83c404               add esp, 4
// 00544097  8bf0                 mov esi, eax
// 00544099  8b4508               mov eax, dword ptr [ebp + 8]
// 0054409c  50                   push eax
// 0054409d  e88e850000           call 0x54c630
// 005440a2  83c404               add esp, 4
// 005440a5  8b0e                 mov ecx, dword ptr [esi]
// 005440a7  8908                 mov dword ptr [eax], ecx
// 005440a9  8b55fc               mov edx, dword ptr [ebp - 4]
// 005440ac  52                   push edx
// 005440ad  e8eedcffff           call 0x541da0
// 005440b2  83c404               add esp, 4
// 005440b5  8b00                 mov eax, dword ptr [eax]
// 005440b7  50                   push eax
// 005440b8  e8d3dcffff           call 0x541d90
// 005440bd  83c404               add esp, 4
// 005440c0  0fbe08               movsx ecx, byte ptr [eax]
// 005440c3  85c9                 test ecx, ecx
// 005440c5  751c                 jne 0x5440e3
// 005440c7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005440ca  52                   push edx
// 005440cb  e8d0dcffff           call 0x541da0
// 005440d0  83c404               add esp, 4
// 005440d3  8b00                 mov eax, dword ptr [eax]
// 005440d5  50                   push eax
// 005440d6  e865850000           call 0x54c640
// 005440db  83c404               add esp, 4
// 005440de  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005440e1  8908                 mov dword ptr [eax], ecx
// 005440e3  8b5508               mov edx, dword ptr [ebp + 8]
// 005440e6  52                   push edx
// 005440e7  e854850000           call 0x54c640
// 005440ec  83c404               add esp, 4
// 005440ef  8bf0                 mov esi, eax
// 005440f1  8b45fc               mov eax, dword ptr [ebp - 4]
// 005440f4  50                   push eax
// 005440f5  e846850000           call 0x54c640
// 005440fa  83c404               add esp, 4
// 005440fd  8b0e                 mov ecx, dword ptr [esi]
// 005440ff  8908                 mov dword ptr [eax], ecx
// 00544101  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00544104  e8e7e2ffff           call 0x5423f0
// 00544109  8b5508               mov edx, dword ptr [ebp + 8]
// 0054410c  3b10                 cmp edx, dword ptr [eax]
// 0054410e  750f                 jne 0x54411f
// 00544110  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00544113  e8d8e2ffff           call 0x5423f0
// 00544118  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054411b  8908                 mov dword ptr [eax], ecx
// 0054411d  eb58                 jmp 0x544177
// 0054411f  8b5508               mov edx, dword ptr [ebp + 8]
// 00544122  52                   push edx
// 00544123  e818850000           call 0x54c640
// 00544128  83c404               add esp, 4
// 0054412b  8b00                 mov eax, dword ptr [eax]
// 0054412d  50                   push eax
// 0054412e  e86ddcffff           call 0x541da0
// 00544133  83c404               add esp, 4
// 00544136  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00544139  3b08                 cmp ecx, dword ptr [eax]
// 0054413b  751e                 jne 0x54415b
// 0054413d  8b5508               mov edx, dword ptr [ebp + 8]
// 00544140  52                   push edx
// 00544141  e8fa840000           call 0x54c640
// 00544146  83c404               add esp, 4
// 00544149  8b00                 mov eax, dword ptr [eax]
// 0054414b  50                   push eax
// 0054414c  e84fdcffff           call 0x541da0
// 00544151  83c404               add esp, 4
// 00544154  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544157  8908                 mov dword ptr [eax], ecx
// 00544159  eb1c                 jmp 0x544177
// 0054415b  8b5508               mov edx, dword ptr [ebp + 8]
// 0054415e  52                   push edx
// 0054415f  e8dc840000           call 0x54c640
// 00544164  83c404               add esp, 4
// 00544167  8b00                 mov eax, dword ptr [eax]
// 00544169  50                   push eax
// 0054416a  e8c1840000           call 0x54c630
// 0054416f  83c404               add esp, 4
// 00544172  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544175  8908                 mov dword ptr [eax], ecx
// 00544177  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054417a  52                   push edx
// 0054417b  e820dcffff           call 0x541da0
// 00544180  83c404               add esp, 4
// 00544183  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00544186  8908                 mov dword ptr [eax], ecx
// 00544188  8b5508               mov edx, dword ptr [ebp + 8]
// 0054418b  52                   push edx
// 0054418c  e8af840000           call 0x54c640
// 00544191  83c404               add esp, 4
// 00544194  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544197  8908                 mov dword ptr [eax], ecx
// 00544199  5e                   pop esi
// 0054419a  8be5                 mov esp, ebp
// 0054419c  5d                   pop ebp
// 0054419d  c20400               ret 4

#pragma optimize("g", off)

struct VChunk;

char* __cdecl flag(VChunk*);
char* __cdecl link(VChunk*);
void* __cdecl access(void*);
VChunk** __cdecl back(VChunk*);

struct S {
    VChunk** root();
    void f(VChunk*);
};

void S::f(VChunk* p)
{
    VChunk* q = *(VChunk**)access(p);
    *(VChunk**)access(p) = *(VChunk**)link(q);

    if (!*flag(*(VChunk**)link(q)))
        *back(*(VChunk**)link(q)) = p;

    *back(q) = *back(p);

    if (p == *root())
        *root() = q;
    else if (p == *(VChunk**)link(*back(p)))
        *(VChunk**)link(*back(p)) = q;
    else
        *(VChunk**)access(*back(p)) = q;

    *(VChunk**)link(q) = p;
    *back(p) = q;
}
