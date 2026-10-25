// from server: 100% by king_originala
// roc 2008-06 00467c50  unit: DxUserInput  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467c50
//
// 00467c50  83ec10               sub esp, 0x10
// 00467c53  56                   push esi
// 00467c54  57                   push edi
// 00467c55  8bf1                 mov esi, ecx
// 00467c57  8d7e34               lea edi, [esi + 0x34]
// 00467c5a  57                   push edi
// 00467c5b  ff15d4228000         call dword ptr [0x8022d4]
// 00467c61  80be9201000000       cmp byte ptr [esi + 0x192], 0
// 00467c68  740e                 je 0x467c78
// 00467c6a  8d442408             lea eax, [esp + 8]
// 00467c6e  50                   push eax
// 00467c6f  8bce                 mov ecx, esi
// 00467c71  e85afeffff           call 0x467ad0
// 00467c76  eb0c                 jmp 0x467c84
// 00467c78  8d4c2410             lea ecx, [esp + 0x10]
// 00467c7c  51                   push ecx
// 00467c7d  8bce                 mov ecx, esi
// 00467c7f  e86cffffff           call 0x467bf0
// 00467c84  d900                 fld dword ptr [eax]
// 00467c86  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00467c8a  d91e                 fstp dword ptr [esi]
// 00467c8c  57                   push edi
// 00467c8d  d94004               fld dword ptr [eax + 4]
// 00467c90  d95e04               fstp dword ptr [esi + 4]
// 00467c93  ff15f4218000         call dword ptr [0x8021f4]
// 00467c99  5f                   pop edi
// 00467c9a  8bc6                 mov eax, esi
// 00467c9c  5e                   pop esi
// 00467c9d  83c410               add esp, 0x10
// 00467ca0  c20400               ret 4

extern "C" void (__stdcall *EnterCriticalSection)(void *);
extern "C" void (__stdcall *LeaveCriticalSection)(void *);

struct Vec2 {
    float x;
    float y;
};

struct DxUserInput {
    char padding0[0x34];
    char criticalSection[0x18];
    char padding1[0x146];
    unsigned char active;

    Vec2 *getActive(Vec2 *);
    Vec2 *getInactive(Vec2 *);
    Vec2 *getPosition(Vec2 *);
};

Vec2 *DxUserInput::getPosition(Vec2 *result)
{
    Vec2 activeValue;
    Vec2 inactiveValue;
    Vec2 *value;

    EnterCriticalSection(criticalSection);
    if (active)
        value = getActive(&activeValue);
    else
        value = getInactive(&inactiveValue);

    result->x = value->x;
    result->y = value->y;
    LeaveCriticalSection(criticalSection);
    return result;
}
