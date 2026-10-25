// from server: 100% by king_originala
// roc 2008-06 0057ea90  unit: RBX::ClearBackpack  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057ea90
//
// 0057ea90  6aff                 push -1
// 0057ea92  6809107d00           push 0x7d1009
// 0057ea97  64a100000000         mov eax, dword ptr fs:[0]
// 0057ea9d  50                   push eax
// 0057ea9e  64892500000000       mov dword ptr fs:[0], esp
// 0057eaa5  51                   push ecx
// 0057eaa6  55                   push ebp
// 0057eaa7  56                   push esi
// 0057eaa8  c744240800000000     mov dword ptr [esp + 8], 0
// 0057eab0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0057eab4  57                   push edi
// 0057eab5  55                   push ebp
// 0057eab6  8bf1                 mov esi, ecx
// 0057eab8  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0057eac0  e89b5ee9ff           call 0x414960
// 0057eac5  83c404               add esp, 4
// 0057eac8  8b4d00               mov ecx, dword ptr [ebp]
// 0057eacb  56                   push esi
// 0057eacc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0057ead4  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0057eadc  e80fbefdff           call 0x55a8f0
// 0057eae1  8b3d90288000         mov edi, dword ptr [0x802890]
// 0057eae7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057eaeb  eb03                 jmp 0x57eaf0
// 0057eaed  8d4900               lea ecx, [ecx]
// 0057eaf0  85c0                 test eax, eax
// 0057eaf2  7406                 je 0x57eafa
// 0057eaf4  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0057eaf8  7406                 je 0x57eb00
// 0057eafa  ffd7                 call edi
// 0057eafc  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057eb00  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057eb04  3b4c2430             cmp ecx, dword ptr [esp + 0x30]
// 0057eb08  745c                 je 0x57eb66
// 0057eb0a  8b7500               mov esi, dword ptr [ebp]
// 0057eb0d  85c0                 test eax, eax
// 0057eb0f  750a                 jne 0x57eb1b
// 0057eb11  ffd7                 call edi
// 0057eb13  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057eb17  85c0                 test eax, eax
// 0057eb19  7404                 je 0x57eb1f
// 0057eb1b  8b00                 mov eax, dword ptr [eax]
// 0057eb1d  eb02                 jmp 0x57eb21
// 0057eb1f  33c0                 xor eax, eax
// 0057eb21  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057eb25  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0057eb28  7202                 jb 0x57eb2c
// 0057eb2a  ffd7                 call edi
// 0057eb2c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057eb30  8b08                 mov ecx, dword ptr [eax]
// 0057eb32  56                   push esi
// 0057eb33  e8b8bdfdff           call 0x55a8f0
// 0057eb38  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057eb3c  85c0                 test eax, eax
// 0057eb3e  750a                 jne 0x57eb4a
// 0057eb40  ffd7                 call edi
// 0057eb42  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057eb46  85c0                 test eax, eax
// 0057eb48  7404                 je 0x57eb4e
// 0057eb4a  8b08                 mov ecx, dword ptr [eax]
// 0057eb4c  eb02                 jmp 0x57eb50
// 0057eb4e  33c9                 xor ecx, ecx
// 0057eb50  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057eb54  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 0057eb57  7206                 jb 0x57eb5f
// 0057eb59  ffd7                 call edi
// 0057eb5b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057eb5f  8344242808           add dword ptr [esp + 0x28], 8
// 0057eb64  eb8a                 jmp 0x57eaf0
// 0057eb66  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057eb6a  5f                   pop edi
// 0057eb6b  5e                   pop esi
// 0057eb6c  8bc5                 mov eax, ebp
// 0057eb6e  5d                   pop ebp
// 0057eb6f  64890d00000000       mov dword ptr fs:[0], ecx
// 0057eb76  83c410               add esp, 0x10
// 0057eb79  c21400               ret 0x14

struct S;

struct Shared
{
    S* px;
    void* pn;
    ~Shared();
};

struct Owner
{
    char padding[16];
    Shared* end;
};

struct Iterator
{
    Owner** owner;
    Shared* position;
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();
Shared __cdecl makeShared();

struct S
{
    void setParent(S*);
    Shared f(Iterator first, Iterator last);
};

Shared S::f(Iterator first, Iterator last)
{
    Shared result = makeShared();
    result.px->setParent(this);

    void (__cdecl *invalid)() = invalid_parameter_noinfo;

    for (;;)
    {
        if (!first.owner || first.owner != last.owner)
            invalid();

        if (first.position == last.position)
            break;

        S* parent = result.px;

        if (!first.owner)
            invalid();

        Owner* owner = first.owner ? *first.owner : 0;
        if (first.position >= owner->end)
            invalid();

        first.position->px->setParent(parent);

        if (!first.owner)
            invalid();

        owner = first.owner ? *first.owner : 0;
        if (first.position >= owner->end)
            invalid();

        ++first.position;
    }

    return result;
}
