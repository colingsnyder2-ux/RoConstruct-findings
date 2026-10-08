// from server: 80% by colin
// roc 2007-08 0061dae0  unit: RBX::ChatOutput  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061dae0
//
// 0061dae0  56                   push esi
// 0061dae1  8b742408             mov esi, dword ptr [esp + 8]
// 0061dae5  57                   push edi
// 0061dae6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061daea  3bf7                 cmp esi, edi
// 0061daec  742b                 je 0x61db19
// 0061daee  53                   push ebx
// 0061daef  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0061daf3  55                   push ebp
// 0061daf4  8b2d94e67700         mov ebp, dword ptr [0x77e694]
// 0061dafa  8d9b00000000         lea ebx, [ebx]
// 0061db00  53                   push ebx
// 0061db01  56                   push esi
// 0061db02  ffd5                 call ebp
// 0061db04  83c408               add esp, 8
// 0061db07  84c0                 test al, al
// 0061db09  7507                 jne 0x61db12
// 0061db0b  83c61c               add esi, 0x1c
// 0061db0e  3bf7                 cmp esi, edi
// 0061db10  75ee                 jne 0x61db00
// 0061db12  5d                   pop ebp
// 0061db13  5b                   pop ebx
// 0061db14  5f                   pop edi
// 0061db15  8bc6                 mov eax, esi
// 0061db17  5e                   pop esi
// 0061db18  c3                   ret 
// 0061db19  5f                   pop edi
// 0061db1a  8bc6                 mov eax, esi
// 0061db1c  5e                   pop esi
// 0061db1d  c3                   ret 

struct ChatLine {
    char pad[0x1c];
};

extern "C" bool __stdcall sub_77E694(const ChatLine*, const ChatLine*);

ChatLine* find_line(ChatLine* first, ChatLine* last, const ChatLine* value)
{
    while (first != last) {
        if (sub_77E694(first, value))
            break;
        first = (ChatLine*)((char*)first + 0x1c);
    }
    return first;
}
