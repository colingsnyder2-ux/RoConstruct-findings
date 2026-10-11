// from server: 77% by atomic.potato
// roc 2009-06 0075a880  unit: MyXTPCommandBars  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075a880
//
// 0075a880  53                   push ebx
// 0075a881  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0075a885  55                   push ebp
// 0075a886  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0075a88a  56                   push esi
// 0075a88b  57                   push edi
// 0075a88c  8bf9                 mov edi, ecx
// 0075a88e  8bff                 mov edi, edi
// 0075a890  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0075a893  33f6                 xor esi, esi
// 0075a895  85c0                 test eax, eax
// 0075a897  7e40                 jle 0x75a8d9
// 0075a899  8da42400000000       lea esp, [esp]
// 0075a8a0  85f6                 test esi, esi
// 0075a8a2  7c2d                 jl 0x75a8d1
// 0075a8a4  3bf0                 cmp esi, eax
// 0075a8a6  7d29                 jge 0x75a8d1
// 0075a8a8  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0075a8ab  7d40                 jge 0x75a8ed
// 0075a8ad  8b4728               mov eax, dword ptr [edi + 0x28]
// 0075a8b0  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0075a8b3  85c9                 test ecx, ecx
// 0075a8b5  741a                 je 0x75a8d1
// 0075a8b7  83b9ac00000000       cmp dword ptr [ecx + 0xac], 0
// 0075a8be  7511                 jne 0x75a8d1
// 0075a8c0  8b11                 mov edx, dword ptr [ecx]
// 0075a8c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0075a8c6  8b9238010000         mov edx, dword ptr [edx + 0x138]
// 0075a8cc  53                   push ebx
// 0075a8cd  55                   push ebp
// 0075a8ce  50                   push eax
// 0075a8cf  ffd2                 call edx
// 0075a8d1  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0075a8d4  46                   inc esi
// 0075a8d5  3bf0                 cmp esi, eax
// 0075a8d7  7cc7                 jl 0x75a8a0
// 0075a8d9  8b7f3c               mov edi, dword ptr [edi + 0x3c]
// 0075a8dc  85ff                 test edi, edi
// 0075a8de  7406                 je 0x75a8e6
// 0075a8e0  837b0c00             cmp dword ptr [ebx + 0xc], 0
// 0075a8e4  75aa                 jne 0x75a890
// 0075a8e6  5f                   pop edi
// 0075a8e7  5e                   pop esi
// 0075a8e8  5d                   pop ebp
// 0075a8e9  5b                   pop ebx
// 0075a8ea  c20c00               ret 0xc
// 0075a8ed  e8f2e3fbff           call 0x718ce4

struct MyXTPCommandBars
{
    char pad_0000[0x28];
    void** m_items;
    int m_count;
    char pad_0030[0x0c];
    MyXTPCommandBars* m_next;

    void func_0075a880(int a, int b, int c);
};

extern "C" void __stdcall sub_00718ce4();

void MyXTPCommandBars::func_0075a880(int a, int b, int c)
{
    MyXTPCommandBars* p = this;
    do
    {
        int i = 0;
        while (i < p->m_count)
        {
            if (i >= 0 && i < p->m_count)
            {
                if (i >= p->m_count)
                {
                    sub_00718ce4();
                }
                void* item = p->m_items[i];
                if (item)
                {
                    if (*(int*)((char*)item + 0xac) == 0)
                    {
                        void** vt = *(void***)item;
                        void (__stdcall *fn)(int, int, int) = (void (__stdcall *)(int, int, int))vt[0x138 / 4];
                        fn(a, b, c);
                    }
                }
            }
            i++;
        }
        p = p->m_next;
    } while (p && *(int*)((char*)a + 0xc) == 0);
}
