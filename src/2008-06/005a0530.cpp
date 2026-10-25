// from server: 100% by king_originala
// roc 2008-06 005a0530  unit: RBX::ArrowTool  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0530
//
// 005a0530  8b442404             mov eax, dword ptr [esp + 4]
// 005a0534  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 005a053a  8b8804010000         mov ecx, dword ptr [eax + 0x104]
// 005a0540  8b9104010000         mov edx, dword ptr [ecx + 0x104]
// 005a0546  85d2                 test edx, edx
// 005a0548  7414                 je 0x5a055e
// 005a054a  8d9b00000000         lea ebx, [ebx]
// 005a0550  8bc1                 mov eax, ecx
// 005a0552  8bca                 mov ecx, edx
// 005a0554  8b9104010000         mov edx, dword ptr [ecx + 0x104]
// 005a055a  85d2                 test edx, edx
// 005a055c  75f2                 jne 0x5a0550
// 005a055e  c3                   ret 

struct Node {
    char padding[0x104];
    Node* next;
};

Node* __cdecl f(Node* node)
{
    Node* result = node->next;
    Node* current = result->next;
    while (current->next) {
        result = current;
        current = current->next;
    }
    return result;
}
