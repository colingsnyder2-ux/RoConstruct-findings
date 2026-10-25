// from server: 100% by king_originala
// roc 2008-06 0054cd10  unit: RBX::RenderBase::Mesh  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054cd10
//
// 0054cd10  55                   push ebp
// 0054cd11  8bec                 mov ebp, esp
// 0054cd13  83ec08               sub esp, 8
// 0054cd16  56                   push esi
// 0054cd17  894df8               mov dword ptr [ebp - 8], ecx
// 0054cd1a  8b4508               mov eax, dword ptr [ebp + 8]
// 0054cd1d  50                   push eax
// 0054cd1e  e87d50ffff           call 0x541da0
// 0054cd23  83c404               add esp, 4
// 0054cd26  8b08                 mov ecx, dword ptr [eax]
// 0054cd28  894dfc               mov dword ptr [ebp - 4], ecx
// 0054cd2b  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054cd2e  52                   push edx
// 0054cd2f  e8fcf8ffff           call 0x54c630
// 0054cd34  83c404               add esp, 4
// 0054cd37  8bf0                 mov esi, eax
// 0054cd39  8b4508               mov eax, dword ptr [ebp + 8]
// 0054cd3c  50                   push eax
// 0054cd3d  e85e50ffff           call 0x541da0
// 0054cd42  83c404               add esp, 4
// 0054cd45  8b0e                 mov ecx, dword ptr [esi]
// 0054cd47  8908                 mov dword ptr [eax], ecx
// 0054cd49  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054cd4c  52                   push edx
// 0054cd4d  e8def8ffff           call 0x54c630
// 0054cd52  83c404               add esp, 4
// 0054cd55  8b00                 mov eax, dword ptr [eax]
// 0054cd57  50                   push eax
// 0054cd58  e8a3f8ffff           call 0x54c600
// 0054cd5d  83c404               add esp, 4
// 0054cd60  0fbe08               movsx ecx, byte ptr [eax]
// 0054cd63  85c9                 test ecx, ecx
// 0054cd65  751c                 jne 0x54cd83
// 0054cd67  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054cd6a  52                   push edx
// 0054cd6b  e8c0f8ffff           call 0x54c630
// 0054cd70  83c404               add esp, 4
// 0054cd73  8b00                 mov eax, dword ptr [eax]
// 0054cd75  50                   push eax
// 0054cd76  e8c5f8ffff           call 0x54c640
// 0054cd7b  83c404               add esp, 4
// 0054cd7e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054cd81  8908                 mov dword ptr [eax], ecx
// 0054cd83  8b5508               mov edx, dword ptr [ebp + 8]
// 0054cd86  52                   push edx
// 0054cd87  e8b4f8ffff           call 0x54c640
// 0054cd8c  83c404               add esp, 4
// 0054cd8f  8bf0                 mov esi, eax
// 0054cd91  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054cd94  50                   push eax
// 0054cd95  e8a6f8ffff           call 0x54c640
// 0054cd9a  83c404               add esp, 4
// 0054cd9d  8b0e                 mov ecx, dword ptr [esi]
// 0054cd9f  8908                 mov dword ptr [eax], ecx
// 0054cda1  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054cda4  e84756ffff           call 0x5423f0
// 0054cda9  8b5508               mov edx, dword ptr [ebp + 8]
// 0054cdac  3b10                 cmp edx, dword ptr [eax]
// 0054cdae  750f                 jne 0x54cdbf
// 0054cdb0  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054cdb3  e83856ffff           call 0x5423f0
// 0054cdb8  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054cdbb  8908                 mov dword ptr [eax], ecx
// 0054cdbd  eb58                 jmp 0x54ce17
// 0054cdbf  8b5508               mov edx, dword ptr [ebp + 8]
// 0054cdc2  52                   push edx
// 0054cdc3  e878f8ffff           call 0x54c640
// 0054cdc8  83c404               add esp, 4
// 0054cdcb  8b00                 mov eax, dword ptr [eax]
// 0054cdcd  50                   push eax
// 0054cdce  e85df8ffff           call 0x54c630
// 0054cdd3  83c404               add esp, 4
// 0054cdd6  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054cdd9  3b08                 cmp ecx, dword ptr [eax]
// 0054cddb  751e                 jne 0x54cdfb
// 0054cddd  8b5508               mov edx, dword ptr [ebp + 8]
// 0054cde0  52                   push edx
// 0054cde1  e85af8ffff           call 0x54c640
// 0054cde6  83c404               add esp, 4
// 0054cde9  8b00                 mov eax, dword ptr [eax]
// 0054cdeb  50                   push eax
// 0054cdec  e83ff8ffff           call 0x54c630
// 0054cdf1  83c404               add esp, 4
// 0054cdf4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054cdf7  8908                 mov dword ptr [eax], ecx
// 0054cdf9  eb1c                 jmp 0x54ce17
// 0054cdfb  8b5508               mov edx, dword ptr [ebp + 8]
// 0054cdfe  52                   push edx
// 0054cdff  e83cf8ffff           call 0x54c640
// 0054ce04  83c404               add esp, 4
// 0054ce07  8b00                 mov eax, dword ptr [eax]
// 0054ce09  50                   push eax
// 0054ce0a  e8914fffff           call 0x541da0
// 0054ce0f  83c404               add esp, 4
// 0054ce12  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054ce15  8908                 mov dword ptr [eax], ecx
// 0054ce17  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054ce1a  52                   push edx
// 0054ce1b  e810f8ffff           call 0x54c630
// 0054ce20  83c404               add esp, 4
// 0054ce23  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054ce26  8908                 mov dword ptr [eax], ecx
// 0054ce28  8b5508               mov edx, dword ptr [ebp + 8]
// 0054ce2b  52                   push edx
// 0054ce2c  e80ff8ffff           call 0x54c640
// 0054ce31  83c404               add esp, 4
// 0054ce34  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054ce37  8908                 mov dword ptr [eax], ecx
// 0054ce39  5e                   pop esi
// 0054ce3a  8be5                 mov esp, ebp
// 0054ce3c  5d                   pop ebp
// 0054ce3d  c20400               ret 4

struct VChunk;

char * __cdecl rightLink(VChunk *);
void * __cdecl leftLink(void *);
char * __cdecl parentLink(VChunk *);
char * __cdecl nilFlag(VChunk *);

struct S {
    char *rootLink();
    void f(VChunk *);
};

#pragma optimize("", off)
void S::f(VChunk *node)
{
    VChunk *replacement = *reinterpret_cast<VChunk **>(rightLink(node));

    *reinterpret_cast<VChunk **>(rightLink(node)) =
        *reinterpret_cast<VChunk **>(leftLink(replacement));

    if (*nilFlag(*reinterpret_cast<VChunk **>(leftLink(replacement))) == 0) {
        *reinterpret_cast<VChunk **>(
            parentLink(*reinterpret_cast<VChunk **>(leftLink(replacement)))) = node;
    }

    *reinterpret_cast<VChunk **>(parentLink(replacement)) =
        *reinterpret_cast<VChunk **>(parentLink(node));

    if (node == *reinterpret_cast<VChunk **>(rootLink())) {
        *reinterpret_cast<VChunk **>(rootLink()) = replacement;
    } else if (node == *reinterpret_cast<VChunk **>(
                           leftLink(*reinterpret_cast<VChunk **>(parentLink(node))))) {
        *reinterpret_cast<VChunk **>(
            leftLink(*reinterpret_cast<VChunk **>(parentLink(node)))) = replacement;
    } else {
        *reinterpret_cast<VChunk **>(
            rightLink(*reinterpret_cast<VChunk **>(parentLink(node)))) = replacement;
    }

    *reinterpret_cast<VChunk **>(leftLink(replacement)) = node;
    *reinterpret_cast<VChunk **>(parentLink(node)) = replacement;
}
#pragma optimize("", on)
