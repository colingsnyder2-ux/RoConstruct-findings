// from server: 70% by colin
// roc 2007-08 00632c50  unit: MyXTPCommandBars  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632c50
//
// 00632c50  53                   push ebx
// 00632c51  56                   push esi
// 00632c52  8bf1                 mov esi, ecx
// 00632c54  57                   push edi
// 00632c55  8bbe84000000         mov edi, dword ptr [esi + 0x84]
// 00632c5b  33d2                 xor edx, edx
// 00632c5d  85ff                 test edi, edi
// 00632c5f  7e17                 jle 0x632c78
// 00632c61  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00632c65  52                   push edx
// 00632c66  8bce                 mov ecx, esi
// 00632c68  e8a3fcffff           call 0x632910
// 00632c6d  3bc3                 cmp eax, ebx
// 00632c6f  7410                 je 0x632c81
// 00632c71  83c201               add edx, 1
// 00632c74  3bd7                 cmp edx, edi
// 00632c76  7ced                 jl 0x632c65
// 00632c78  5f                   pop edi
// 00632c79  5e                   pop esi
// 00632c7a  83c8ff               or eax, 0xffffffff
// 00632c7d  5b                   pop ebx
// 00632c7e  c20400               ret 4
// 00632c81  5f                   pop edi
// 00632c82  5e                   pop esi
// 00632c83  8bc2                 mov eax, edx
// 00632c85  5b                   pop ebx
// 00632c86  c20400               ret 4

struct MyXTPCommandBars
{
    char pad[0x84];
    int count;

    int sub_00632910(int);
    int sub_00632c50(int);
};

int MyXTPCommandBars::sub_00632c50(int arg)
{
    int i = 0;
    int n = count;
    if (n > 0)
    {
        do
        {
            if (sub_00632910(i) == arg)
                return i;
            ++i;
        } while (i < n);
    }
    return -1;
}
