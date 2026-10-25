// from server: 100% by king_originala
// roc 2008-06 005a23f0  unit: RBX::Workspace  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a23f0
//
// 005a23f0  8b442404             mov eax, dword ptr [esp + 4]
// 005a23f4  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005a23f7  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 005a23fd  56                   push esi
// 005a23fe  8b7008               mov esi, dword ptr [eax + 8]
// 005a2401  8b1432               mov edx, dword ptr [edx + esi]
// 005a2404  035004               add edx, dword ptr [eax + 4]
// 005a2407  8b00                 mov eax, dword ptr [eax]
// 005a2409  8d8c0a34010000       lea ecx, [edx + ecx + 0x134]
// 005a2410  5e                   pop esi
// 005a2411  ffe0                 jmp eax

typedef void (__thiscall *Function)(void*);

struct Object {
    char padding[0x134];
    char* table;
};

struct Descriptor {
    Function function;
    int adjustment;
    int tableOffset;
    int unused;
    Object* object;
};

void __cdecl invoke(Descriptor* descriptor)
{
    Object* object = descriptor->object;
    int displacement = *reinterpret_cast<int*>(
        object->table + descriptor->tableOffset);
    displacement += descriptor->adjustment;
    descriptor->function(
        reinterpret_cast<char*>(object) + 0x134 + displacement);
}
