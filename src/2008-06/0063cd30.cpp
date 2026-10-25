// from server: 100% by king_originala
// roc 2008-06 0063cd30  unit: RBX::P8SpawnLocation::?$GetSetImpl  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063cd30
//
// 0063cd30  56                   push esi
// 0063cd31  8b742408             mov esi, dword ptr [esp + 8]
// 0063cd35  57                   push edi
// 0063cd36  56                   push esi
// 0063cd37  8bf9                 mov edi, ecx
// 0063cd39  e8b2d5fcff           call 0x60a2f0
// 0063cd3e  83c404               add esp, 4
// 0063cd41  84c0                 test al, al
// 0063cd43  7534                 jne 0x63cd79
// 0063cd45  8d4708               lea eax, [edi + 8]
// 0063cd48  85c0                 test eax, eax
// 0063cd4a  7422                 je 0x63cd6e
// 0063cd4c  8b0e                 mov ecx, dword ptr [esi]
// 0063cd4e  8908                 mov dword ptr [eax], ecx
// 0063cd50  8b5604               mov edx, dword ptr [esi + 4]
// 0063cd53  895004               mov dword ptr [eax + 4], edx
// 0063cd56  8b4e08               mov ecx, dword ptr [esi + 8]
// 0063cd59  894808               mov dword ptr [eax + 8], ecx
// 0063cd5c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0063cd5f  89500c               mov dword ptr [eax + 0xc], edx
// 0063cd62  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0063cd65  894810               mov dword ptr [eax + 0x10], ecx
// 0063cd68  8b5614               mov edx, dword ptr [esi + 0x14]
// 0063cd6b  895014               mov dword ptr [eax + 0x14], edx
// 0063cd6e  c707089d8400         mov dword ptr [edi], 0x849d08
// 0063cd74  5f                   pop edi
// 0063cd75  5e                   pop esi
// 0063cd76  c20400               ret 4
// 0063cd79  c70700000000         mov dword ptr [edi], 0
// 0063cd7f  5f                   pop edi
// 0063cd80  5e                   pop esi
// 0063cd81  c20400               ret 4

inline void* operator new(unsigned int, void* p) { return p; }

struct Value {
    unsigned int data[6];
};

extern "C" bool __cdecl func_0060a2f0(const Value&);
extern unsigned char table_00849d08;

struct S {
    void* table;
    unsigned int reserved;
    Value value;

    void set(const Value&);
};

void S::set(const Value& source)
{
    if (!func_0060a2f0(source)) {
        new (&value) Value(source);
        table = &table_00849d08;
    } else {
        table = 0;
    }
}
