// from server: 100% by king_originala
// roc 2008-06 00540690  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540690
//
// 00540690  55                   push ebp
// 00540691  8bec                 mov ebp, esp
// 00540693  83ec1c               sub esp, 0x1c
// 00540696  56                   push esi
// 00540697  894de4               mov dword ptr [ebp - 0x1c], ecx
// 0054069a  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0054069d  e87e5c0000           call 0x546320
// 005406a2  8bf0                 mov esi, eax
// 005406a4  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005406a7  e8345c0000           call 0x5462e0
// 005406ac  3bf0                 cmp esi, eax
// 005406ae  731d                 jae 0x5406cd
// 005406b0  8b4508               mov eax, dword ptr [ebp + 8]
// 005406b3  50                   push eax
// 005406b4  6a01                 push 1
// 005406b6  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005406b9  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005406bc  52                   push edx
// 005406bd  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005406c0  e87b0e0000           call 0x541540
// 005406c5  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005406c8  894110               mov dword ptr [ecx + 0x10], eax
// 005406cb  eb2f                 jmp 0x5406fc
// 005406cd  8d55f0               lea edx, [ebp - 0x10]
// 005406d0  52                   push edx
// 005406d1  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005406d4  e887ffffff           call 0x540660
// 005406d9  8b08                 mov ecx, dword ptr [eax]
// 005406db  8b5004               mov edx, dword ptr [eax + 4]
// 005406de  894df8               mov dword ptr [ebp - 8], ecx
// 005406e1  8955fc               mov dword ptr [ebp - 4], edx
// 005406e4  8b4508               mov eax, dword ptr [ebp + 8]
// 005406e7  50                   push eax
// 005406e8  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005406eb  51                   push ecx
// 005406ec  8b55f8               mov edx, dword ptr [ebp - 8]
// 005406ef  52                   push edx
// 005406f0  8d45e8               lea eax, [ebp - 0x18]
// 005406f3  50                   push eax
// 005406f4  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005406f7  e8840c0000           call 0x541380
// 005406fc  5e                   pop esi
// 005406fd  8be5                 mov esp, ebp
// 005406ff  5d                   pop ebp
// 00540700  c20400               ret 4

struct Iterator {
    void* owner;
    void* position;
};

struct S {
    char padding[16];
    void* finish;

    unsigned size() const;
    unsigned capacity() const;
    Iterator end();
    void* append(void* position, unsigned count, const int& value);
    Iterator insert(Iterator position, const int& value);
    void push_back(const int& value);
};

#pragma optimize("", off)
void S::push_back(const int& value)
{
    if (size() < capacity())
        finish = append(finish, 1, value);
    else {
        Iterator position;
        position = end();
        insert(position, value);
    }
}
#pragma optimize("", on)
