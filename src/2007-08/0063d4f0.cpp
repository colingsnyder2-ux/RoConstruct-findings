// from server: 100% by colin
// roc 2007-08 0063d4f0  unit: CXTPPaintManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063d4f0
//
// 0063d4f0  8b442404             mov eax, dword ptr [esp + 4]
// 0063d4f4  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 0063d4fa  83f802               cmp eax, 2
// 0063d4fd  741e                 je 0x63d51d
// 0063d4ff  83f803               cmp eax, 3
// 0063d502  7419                 je 0x63d51d
// 0063d504  837c240800           cmp dword ptr [esp + 8], 0
// 0063d509  7409                 je 0x63d514
// 0063d50b  8d81e0000000         lea eax, [ecx + 0xe0]
// 0063d511  c20800               ret 8
// 0063d514  8d81d8000000         lea eax, [ecx + 0xd8]
// 0063d51a  c20800               ret 8
// 0063d51d  837c240800           cmp dword ptr [esp + 8], 0
// 0063d522  8d81f0000000         lea eax, [ecx + 0xf0]
// 0063d528  7506                 jne 0x63d530
// 0063d52a  8d81e8000000         lea eax, [ecx + 0xe8]
// 0063d530  c20800               ret 8

struct CXTPPaintManager
{
    char pad[0xd8];
    int field_d8;
    int field_e0;
    int field_e8;
    int field_f0;
    int field_fc;

    int* get(int, int);
};

int* CXTPPaintManager::get(int a, int b)
{
    int v = *(int*)((char*)a + 0xfc);
    if (v == 2 || v == 3)
    {
        if (b != 0)
            return (int*)((char*)this + 0xf0);
        return (int*)((char*)this + 0xe8);
    }
    if (b != 0)
        return (int*)((char*)this + 0xe0);
    return (int*)((char*)this + 0xd8);
}
