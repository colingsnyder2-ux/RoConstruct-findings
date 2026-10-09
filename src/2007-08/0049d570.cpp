// from server: 51% by colin
// roc 2007-08 0049d570  unit: RBX::Network::Server::ClientProxy  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049d570
//
// 0049d570  83ec08               sub esp, 8
// 0049d573  53                   push ebx
// 0049d574  55                   push ebp
// 0049d575  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0049d57b  56                   push esi
// 0049d57c  8bb1701d0000         mov esi, dword ptr [ecx + 0x1d70]
// 0049d582  3bb1741d0000         cmp esi, dword ptr [ecx + 0x1d74]
// 0049d588  57                   push edi
// 0049d589  8db96c1d0000         lea edi, [ecx + 0x1d6c]
// 0049d58f  7602                 jbe 0x49d593
// 0049d591  ffd5                 call ebp
// 0049d593  8b5f08               mov ebx, dword ptr [edi + 8]
// 0049d596  395f04               cmp dword ptr [edi + 4], ebx
// 0049d599  7602                 jbe 0x49d59d
// 0049d59b  ffd5                 call ebp
// 0049d59d  3bf3                 cmp esi, ebx
// 0049d59f  8bc7                 mov eax, edi
// 0049d5a1  89742414             mov dword ptr [esp + 0x14], esi
// 0049d5a5  7414                 je 0x49d5bb
// 0049d5a7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049d5ab  eb03                 jmp 0x49d5b0
// 0049d5ad  8d4900               lea ecx, [ecx]
// 0049d5b0  390e                 cmp dword ptr [esi], ecx
// 0049d5b2  7407                 je 0x49d5bb
// 0049d5b4  83c604               add esi, 4
// 0049d5b7  3bf3                 cmp esi, ebx
// 0049d5b9  75f5                 jne 0x49d5b0
// 0049d5bb  85c0                 test eax, eax
// 0049d5bd  7404                 je 0x49d5c3
// 0049d5bf  3bc7                 cmp eax, edi
// 0049d5c1  7402                 je 0x49d5c5
// 0049d5c3  ffd5                 call ebp
// 0049d5c5  5f                   pop edi
// 0049d5c6  33c0                 xor eax, eax
// 0049d5c8  3bf3                 cmp esi, ebx
// 0049d5ca  5e                   pop esi
// 0049d5cb  5d                   pop ebp
// 0049d5cc  0f94c0               sete al
// 0049d5cf  5b                   pop ebx
// 0049d5d0  83c408               add esp, 8
// 0049d5d3  c20400               ret 4

struct ClientProxy {
    char pad[0x1d6c];
    int* begin;
    int* end;
    int* cap;
    bool contains(int* value);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

bool ClientProxy::contains(int* value) {
    int* first = this->begin;
    int* last = this->end;
    if (first > last) {
        _invalid_parameter_noinfo();
    }
    int* cap = this->cap;
    if (this->end > cap) {
        _invalid_parameter_noinfo();
    }
    int* found = first;
    if (first != last) {
        while (*found != (int)value) {
            ++found;
            if (found == last) break;
        }
    }
    if (found != first && found != last) {
        _invalid_parameter_noinfo();
    }
    return found == last;
}
