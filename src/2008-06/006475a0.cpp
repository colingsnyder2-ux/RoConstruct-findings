// from server: 100% by king_originala
// roc 2008-06 006475a0  unit: RBX::GlueJoint  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006475a0
//
// 006475a0  53                   push ebx
// 006475a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006475a5  55                   push ebp
// 006475a6  56                   push esi
// 006475a7  57                   push edi
// 006475a8  8bcb                 mov ecx, ebx
// 006475aa  33ed                 xor ebp, ebp
// 006475ac  e8df05faff           call 0x5e7b90
// 006475b1  8bf0                 mov esi, eax
// 006475b3  85f6                 test esi, esi
// 006475b5  743a                 je 0x6475f1
// 006475b7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 006475ba  3bdf                 cmp ebx, edi
// 006475bc  7503                 jne 0x6475c1
// 006475be  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006475c1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006475c5  50                   push eax
// 006475c6  56                   push esi
// 006475c7  57                   push edi
// 006475c8  53                   push ebx
// 006475c9  e862feffff           call 0x647430
// 006475ce  83c410               add esp, 0x10
// 006475d1  84c0                 test al, al
// 006475d3  740e                 je 0x6475e3
// 006475d5  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 006475d9  7504                 jne 0x6475df
// 006475db  8bee                 mov ebp, esi
// 006475dd  eb04                 jmp 0x6475e3
// 006475df  85ed                 test ebp, ebp
// 006475e1  7515                 jne 0x6475f8
// 006475e3  56                   push esi
// 006475e4  8bcb                 mov ecx, ebx
// 006475e6  e8b505faff           call 0x5e7ba0
// 006475eb  8bf0                 mov esi, eax
// 006475ed  85f6                 test esi, esi
// 006475ef  75c6                 jne 0x6475b7
// 006475f1  5f                   pop edi
// 006475f2  5e                   pop esi
// 006475f3  5d                   pop ebp
// 006475f4  33c0                 xor eax, eax
// 006475f6  5b                   pop ebx
// 006475f7  c3                   ret 
// 006475f8  8bc7                 mov eax, edi
// 006475fa  5f                   pop edi
// 006475fb  5e                   pop esi
// 006475fc  5d                   pop ebp
// 006475fd  5b                   pop ebx
// 006475fe  c3                   ret 

struct Primitive;

struct Geometry {
    Primitive* getFirstA();
    Primitive* getNext(Primitive*);
};

struct Primitive {
    char padding[12];
    Geometry* first;
    Geometry* second;
};

bool __cdecl matches(Geometry*, Geometry*, Primitive*, int);

Geometry* __cdecl findOther(Geometry* source, Geometry* target, int mode)
{
    Primitive* found = 0;
    Primitive* current = source->getFirstA();

    while (current) {
        Geometry* other = current->first;
        if (source == other)
            other = current->second;

        if (matches(source, other, current, mode)) {
            if (other == target)
                found = current;
            else if (found)
                return other;
        }

        current = source->getNext(current);
    }

    return 0;
}
