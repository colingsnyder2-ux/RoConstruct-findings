// from server: 100% by king_originala
// roc 2008-06 005e5520  unit: RBX::JointsService  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5520
//
// 005e5520  56                   push esi
// 005e5521  57                   push edi
// 005e5522  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e5526  8b07                 mov eax, dword ptr [edi]
// 005e5528  6a00                 push 0
// 005e552a  68709f9300           push 0x939f70
// 005e552f  687c909200           push 0x92907c
// 005e5534  6a00                 push 0
// 005e5536  50                   push eax
// 005e5537  8bf1                 mov esi, ecx
// 005e5539  e888c20b00           call 0x6a17c6
// 005e553e  83c414               add esp, 0x14
// 005e5541  85c0                 test eax, eax
// 005e5543  740c                 je 0x5e5551
// 005e5545  50                   push eax
// 005e5546  8d8e38010000         lea ecx, [esi + 0x138]
// 005e554c  e87f7fffff           call 0x5dd4d0
// 005e5551  57                   push edi
// 005e5552  8bce                 mov ecx, esi
// 005e5554  e83759f7ff           call 0x55ae90
// 005e5559  5f                   pop edi
// 005e555a  5e                   pop esi
// 005e555b  c20400               ret 4

extern char sourceType;
extern char targetType;

extern "C" void* __cdecl runtimeCast(
    void*, int, const void*, const void*, int);

struct Item;

struct Collection {
    void remove(Item*);
};

struct S {
    char padding[0x138];
    Collection collection;

    void baseRemove(void**);
    void remove(void**);
};

void S::remove(void** value)
{
    Item* item = static_cast<Item*>(
        runtimeCast(*value, 0, &sourceType, &targetType, 0));
    if (item)
        collection.remove(item);
    baseRemove(value);
}
