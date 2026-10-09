// from server: 70% by colin
// roc 2007-08 0061c680  unit: RBX::Network::VPlayers::?$Listener  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c680
//
// 0061c680  53                   push ebx
// 0061c681  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0061c685  56                   push esi
// 0061c686  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061c68a  3bf3                 cmp esi, ebx
// 0061c68c  7441                 je 0x61c6cf
// 0061c68e  55                   push ebp
// 0061c68f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0061c693  57                   push edi
// 0061c694  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061c698  eb06                 jmp 0x61c6a0
// 0061c69a  8d9b00000000         lea ebx, [ebx]
// 0061c6a0  8a06                 mov al, byte ptr [esi]
// 0061c6a2  8844241c             mov byte ptr [esp + 0x1c], al
// 0061c6a6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061c6aa  51                   push ecx
// 0061c6ab  55                   push ebp
// 0061c6ac  e8affeffff           call 0x61c560
// 0061c6b1  83c404               add esp, 4
// 0061c6b4  8bc8                 mov ecx, eax
// 0061c6b6  ff1544e47700         call dword ptr [0x77e444]
// 0061c6bc  8807                 mov byte ptr [edi], al
// 0061c6be  83c601               add esi, 1
// 0061c6c1  83c701               add edi, 1
// 0061c6c4  3bf3                 cmp esi, ebx
// 0061c6c6  75d8                 jne 0x61c6a0
// 0061c6c8  8bc7                 mov eax, edi
// 0061c6ca  5f                   pop edi
// 0061c6cb  5d                   pop ebp
// 0061c6cc  5e                   pop esi
// 0061c6cd  5b                   pop ebx
// 0061c6ce  c3                   ret 
// 0061c6cf  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061c6d3  5e                   pop esi
// 0061c6d4  5b                   pop ebx
// 0061c6d5  c3                   ret 

extern "C" char __stdcall sub_61c560(int, char);
extern "C" char __stdcall sub_77e444(void*, char);

struct Listener {
    char* transform(char* first, char* last, char* out, void* loc);
};

char* Listener::transform(char* first, char* last, char* out, void* loc)
{
    if (first == last)
        return out;
    while (first != last) {
        char c = *first;
        char r = sub_77e444((void*)sub_61c560((int)loc, c), c);
        *out = r;
        ++first;
        ++out;
    }
    return out;
}
