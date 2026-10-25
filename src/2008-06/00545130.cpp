// from server: 100% by king_originala
// roc 2008-06 00545130  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00545130
//
// 00545130  55                   push ebp
// 00545131  8bec                 mov ebp, esp
// 00545133  83ec08               sub esp, 8
// 00545136  56                   push esi
// 00545137  894df8               mov dword ptr [ebp - 8], ecx
// 0054513a  8b4508               mov eax, dword ptr [ebp + 8]
// 0054513d  50                   push eax
// 0054513e  e8ed740000           call 0x54c630
// 00545143  83c404               add esp, 4
// 00545146  8b08                 mov ecx, dword ptr [eax]
// 00545148  894dfc               mov dword ptr [ebp - 4], ecx
// 0054514b  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054514e  52                   push edx
// 0054514f  e84cccffff           call 0x541da0
// 00545154  83c404               add esp, 4
// 00545157  8bf0                 mov esi, eax
// 00545159  8b4508               mov eax, dword ptr [ebp + 8]
// 0054515c  50                   push eax
// 0054515d  e8ce740000           call 0x54c630
// 00545162  83c404               add esp, 4
// 00545165  8b0e                 mov ecx, dword ptr [esi]
// 00545167  8908                 mov dword ptr [eax], ecx
// 00545169  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054516c  52                   push edx
// 0054516d  e82eccffff           call 0x541da0
// 00545172  83c404               add esp, 4
// 00545175  8b00                 mov eax, dword ptr [eax]
// 00545177  50                   push eax
// 00545178  e883dcffff           call 0x542e00
// 0054517d  83c404               add esp, 4
// 00545180  0fbe08               movsx ecx, byte ptr [eax]
// 00545183  85c9                 test ecx, ecx
// 00545185  751c                 jne 0x5451a3
// 00545187  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054518a  52                   push edx
// 0054518b  e810ccffff           call 0x541da0
// 00545190  83c404               add esp, 4
// 00545193  8b00                 mov eax, dword ptr [eax]
// 00545195  50                   push eax
// 00545196  e8a5740000           call 0x54c640
// 0054519b  83c404               add esp, 4
// 0054519e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005451a1  8908                 mov dword ptr [eax], ecx
// 005451a3  8b5508               mov edx, dword ptr [ebp + 8]
// 005451a6  52                   push edx
// 005451a7  e894740000           call 0x54c640
// 005451ac  83c404               add esp, 4
// 005451af  8bf0                 mov esi, eax
// 005451b1  8b45fc               mov eax, dword ptr [ebp - 4]
// 005451b4  50                   push eax
// 005451b5  e886740000           call 0x54c640
// 005451ba  83c404               add esp, 4
// 005451bd  8b0e                 mov ecx, dword ptr [esi]
// 005451bf  8908                 mov dword ptr [eax], ecx
// 005451c1  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005451c4  e827d2ffff           call 0x5423f0
// 005451c9  8b5508               mov edx, dword ptr [ebp + 8]
// 005451cc  3b10                 cmp edx, dword ptr [eax]
// 005451ce  750f                 jne 0x5451df
// 005451d0  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005451d3  e818d2ffff           call 0x5423f0
// 005451d8  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005451db  8908                 mov dword ptr [eax], ecx
// 005451dd  eb58                 jmp 0x545237
// 005451df  8b5508               mov edx, dword ptr [ebp + 8]
// 005451e2  52                   push edx
// 005451e3  e858740000           call 0x54c640
// 005451e8  83c404               add esp, 4
// 005451eb  8b00                 mov eax, dword ptr [eax]
// 005451ed  50                   push eax
// 005451ee  e8adcbffff           call 0x541da0
// 005451f3  83c404               add esp, 4
// 005451f6  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005451f9  3b08                 cmp ecx, dword ptr [eax]
// 005451fb  751e                 jne 0x54521b
// 005451fd  8b5508               mov edx, dword ptr [ebp + 8]
// 00545200  52                   push edx
// 00545201  e83a740000           call 0x54c640
// 00545206  83c404               add esp, 4
// 00545209  8b00                 mov eax, dword ptr [eax]
// 0054520b  50                   push eax
// 0054520c  e88fcbffff           call 0x541da0
// 00545211  83c404               add esp, 4
// 00545214  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00545217  8908                 mov dword ptr [eax], ecx
// 00545219  eb1c                 jmp 0x545237
// 0054521b  8b5508               mov edx, dword ptr [ebp + 8]
// 0054521e  52                   push edx
// 0054521f  e81c740000           call 0x54c640
// 00545224  83c404               add esp, 4
// 00545227  8b00                 mov eax, dword ptr [eax]
// 00545229  50                   push eax
// 0054522a  e801740000           call 0x54c630
// 0054522f  83c404               add esp, 4
// 00545232  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00545235  8908                 mov dword ptr [eax], ecx
// 00545237  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054523a  52                   push edx
// 0054523b  e860cbffff           call 0x541da0
// 00545240  83c404               add esp, 4
// 00545243  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00545246  8908                 mov dword ptr [eax], ecx
// 00545248  8b5508               mov edx, dword ptr [ebp + 8]
// 0054524b  52                   push edx
// 0054524c  e8ef730000           call 0x54c640
// 00545251  83c404               add esp, 4
// 00545254  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00545257  8908                 mov dword ptr [eax], ecx
// 00545259  5e                   pop esi
// 0054525a  8be5                 mov esp, ebp
// 0054525c  5d                   pop ebp
// 0054525d  c20400               ret 4


#pragma optimize("g", off)

struct VChunk;

char* __cdecl left(VChunk*);
char* __cdecl right(VChunk*);
char* __cdecl parent(VChunk*);
char* __cdecl color(VChunk*);

struct S {
    VChunk** root();
    void f(VChunk*);
};

void S::f(VChunk* p)
{
    VChunk* q = *reinterpret_cast<VChunk**>(right(p));

    *reinterpret_cast<VChunk**>(right(p)) =
        *reinterpret_cast<VChunk**>(left(q));

    if (*color(*reinterpret_cast<VChunk**>(left(q))) == 0)
        *reinterpret_cast<VChunk**>(
            parent(*reinterpret_cast<VChunk**>(left(q)))) = p;

    *reinterpret_cast<VChunk**>(parent(q)) =
        *reinterpret_cast<VChunk**>(parent(p));

    if (p == *root())
        *root() = q;
    else if (p == *reinterpret_cast<VChunk**>(
                      left(*reinterpret_cast<VChunk**>(parent(p)))))
        *reinterpret_cast<VChunk**>(
            left(*reinterpret_cast<VChunk**>(parent(p)))) = q;
    else
        *reinterpret_cast<VChunk**>(
            right(*reinterpret_cast<VChunk**>(parent(p)))) = q;

    *reinterpret_cast<VChunk**>(left(q)) = p;
    *reinterpret_cast<VChunk**>(parent(p)) = q;
}
