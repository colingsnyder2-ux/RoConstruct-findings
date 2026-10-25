// from server: 100% by king_originala
// roc 2008-06 005fd460  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd460
//
// 005fd460  8b442404             mov eax, dword ptr [esp + 4]
// 005fd464  56                   push esi
// 005fd465  50                   push eax
// 005fd466  e8b5c5fdff           call 0x5d9a20
// 005fd46b  8bf0                 mov esi, eax
// 005fd46d  83c404               add esp, 4
// 005fd470  85f6                 test esi, esi
// 005fd472  7507                 jne 0x5fd47b
// 005fd474  8d4602               lea eax, [esi + 2]
// 005fd477  5e                   pop esi
// 005fd478  c20400               ret 4
// 005fd47b  8bce                 mov ecx, esi
// 005fd47d  e88eb6fdff           call 0x5d8b10
// 005fd482  85c0                 test eax, eax
// 005fd484  7509                 jne 0x5fd48f
// 005fd486  b803000000           mov eax, 3
// 005fd48b  5e                   pop esi
// 005fd48c  c20400               ret 4
// 005fd48f  8bce                 mov ecx, esi
// 005fd491  e8faa5fdff           call 0x5d7a90
// 005fd496  85c0                 test eax, eax
// 005fd498  7410                 je 0x5fd4aa
// 005fd49a  8bce                 mov ecx, esi
// 005fd49c  e86fbbfdff           call 0x5d9010
// 005fd4a1  85c0                 test eax, eax
// 005fd4a3  b805000000           mov eax, 5
// 005fd4a8  7505                 jne 0x5fd4af
// 005fd4aa  b804000000           mov eax, 4
// 005fd4af  5e                   pop esi
// 005fd4b0  c20400               ret 4

struct S
{
    int check1();
    int check2();
    int check3();
};

extern S* __cdecl resolve(void*);

int __stdcall classify(void* value)
{
    S* object = resolve(value);
    if (!object)
        return 2;
    if (!object->check1())
        return 3;
    if (object->check2() && object->check3())
        return 5;
    return 4;
}
