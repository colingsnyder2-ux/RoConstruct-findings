// from server: 100% by king_originala
// roc 2008-06 0063ccd0  unit: RBX::P8SpawnLocation::?$GetSetImpl  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ccd0
//
// 0063ccd0  56                   push esi
// 0063ccd1  8b742408             mov esi, dword ptr [esp + 8]
// 0063ccd5  57                   push edi
// 0063ccd6  56                   push esi
// 0063ccd7  8bf9                 mov edi, ecx
// 0063ccd9  e812d6fcff           call 0x60a2f0
// 0063ccde  83c404               add esp, 4
// 0063cce1  84c0                 test al, al
// 0063cce3  7534                 jne 0x63cd19
// 0063cce5  8d4708               lea eax, [edi + 8]
// 0063cce8  85c0                 test eax, eax
// 0063ccea  7422                 je 0x63cd0e
// 0063ccec  8b0e                 mov ecx, dword ptr [esi]
// 0063ccee  8908                 mov dword ptr [eax], ecx
// 0063ccf0  8b5604               mov edx, dword ptr [esi + 4]
// 0063ccf3  895004               mov dword ptr [eax + 4], edx
// 0063ccf6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0063ccf9  894808               mov dword ptr [eax + 8], ecx
// 0063ccfc  8b560c               mov edx, dword ptr [esi + 0xc]
// 0063ccff  89500c               mov dword ptr [eax + 0xc], edx
// 0063cd02  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0063cd05  894810               mov dword ptr [eax + 0x10], ecx
// 0063cd08  8b5614               mov edx, dword ptr [esi + 0x14]
// 0063cd0b  895014               mov dword ptr [eax + 0x14], edx
// 0063cd0e  c707009d8400         mov dword ptr [edi], 0x849d00
// 0063cd14  5f                   pop edi
// 0063cd15  5e                   pop esi
// 0063cd16  c20400               ret 4
// 0063cd19  c70700000000         mov dword ptr [edi], 0
// 0063cd1f  5f                   pop edi
// 0063cd20  5e                   pop esi
// 0063cd21  c20400               ret 4

struct Value
{
    unsigned int words[6];
};

extern bool __cdecl func_0060a2f0(...);
extern char descriptor;

inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

struct S
{
    void* tag;
    unsigned int reserved;
    unsigned char storage[sizeof(Value)];

    void f(const Value& value);
};

void S::f(const Value& value)
{
    if (!func_0060a2f0(&value))
    {
        new (storage) Value(value);
        tag = &descriptor;
    }
    else
    {
        tag = 0;
    }
}
