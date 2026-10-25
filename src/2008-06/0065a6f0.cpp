// from server: 100% by king_originala
// roc 2008-06 0065a6f0  unit: RBX::BallBallContact  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065a6f0
//
// 0065a6f0  53                   push ebx
// 0065a6f1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0065a6f5  8b13                 mov edx, dword ptr [ebx]
// 0065a6f7  56                   push esi
// 0065a6f8  69d25df46604         imul edx, edx, 0x466f45d
// 0065a6fe  8b7308               mov esi, dword ptr [ebx + 8]
// 0065a701  8bc1                 mov eax, ecx
// 0065a703  69f6b7fff904         imul esi, esi, 0x4f9ffb7
// 0065a709  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0065a70c  69c99f402701         imul ecx, ecx, 0x127409f
// 0065a712  33f1                 xor esi, ecx
// 0065a714  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065a718  33f2                 xor esi, edx
// 0065a71a  baffff0000           mov edx, 0xffff
// 0065a71f  d3fa                 sar edx, cl
// 0065a721  8d0c49               lea ecx, [ecx + ecx*2]
// 0065a724  57                   push edi
// 0065a725  8d7cc80c             lea edi, [eax + ecx*8 + 0xc]
// 0065a729  23f2                 and esi, edx
// 0065a72b  8b5710               mov edx, dword ptr [edi + 0x10]
// 0065a72e  2b570c               sub edx, dword ptr [edi + 0xc]
// 0065a731  c1fa03               sar edx, 3
// 0065a734  3bf2                 cmp esi, edx
// 0065a736  7206                 jb 0x65a73e
// 0065a738  ff1590288000         call dword ptr [0x802890]
// 0065a73e  8b470c               mov eax, dword ptr [edi + 0xc]
// 0065a741  8b34f0               mov esi, dword ptr [eax + esi*8]
// 0065a744  85f6                 test esi, esi
// 0065a746  7475                 je 0x65a7bd
// 0065a748  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0065a74c  8d642400             lea esp, [esp]
// 0065a750  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0065a753  3b0b                 cmp ecx, dword ptr [ebx]
// 0065a755  755f                 jne 0x65a7b6
// 0065a757  8b5618               mov edx, dword ptr [esi + 0x18]
// 0065a75a  3b5304               cmp edx, dword ptr [ebx + 4]
// 0065a75d  7557                 jne 0x65a7b6
// 0065a75f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0065a762  3b4308               cmp eax, dword ptr [ebx + 8]
// 0065a765  754f                 jne 0x65a7b6
// 0065a767  8b4704               mov eax, dword ptr [edi + 4]
// 0065a76a  3b4708               cmp eax, dword ptr [edi + 8]
// 0065a76d  8b0f                 mov ecx, dword ptr [edi]
// 0065a76f  7d10                 jge 0x65a781
// 0065a771  8d0481               lea eax, [ecx + eax*4]
// 0065a774  85c0                 test eax, eax
// 0065a776  7404                 je 0x65a77c
// 0065a778  8b16                 mov edx, dword ptr [esi]
// 0065a77a  8910                 mov dword ptr [eax], edx
// 0065a77c  ff4704               inc dword ptr [edi + 4]
// 0065a77f  eb35                 jmp 0x65a7b6
// 0065a781  3bf1                 cmp esi, ecx
// 0065a783  721b                 jb 0x65a7a0
// 0065a785  8d0c81               lea ecx, [ecx + eax*4]
// 0065a788  3bf1                 cmp esi, ecx
// 0065a78a  7314                 jae 0x65a7a0
// 0065a78c  8b16                 mov edx, dword ptr [esi]
// 0065a78e  8d442414             lea eax, [esp + 0x14]
// 0065a792  50                   push eax
// 0065a793  8bcf                 mov ecx, edi
// 0065a795  89542418             mov dword ptr [esp + 0x18], edx
// 0065a799  e8f2f9f3ff           call 0x59a190
// 0065a79e  eb16                 jmp 0x65a7b6
// 0065a7a0  6a00                 push 0
// 0065a7a2  40                   inc eax
// 0065a7a3  50                   push eax
// 0065a7a4  8bcf                 mov ecx, edi
// 0065a7a6  e8c5f2f3ff           call 0x599a70
// 0065a7ab  8b4f04               mov ecx, dword ptr [edi + 4]
// 0065a7ae  8b17                 mov edx, dword ptr [edi]
// 0065a7b0  8b06                 mov eax, dword ptr [esi]
// 0065a7b2  89448afc             mov dword ptr [edx + ecx*4 - 4], eax
// 0065a7b6  8b7604               mov esi, dword ptr [esi + 4]
// 0065a7b9  85f6                 test esi, esi
// 0065a7bb  7593                 jne 0x65a750
// 0065a7bd  5f                   pop edi
// 0065a7be  5e                   pop esi
// 0065a7bf  5b                   pop ebx
// 0065a7c0  c20c00               ret 0xc

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Key {
    int x, y, z;
};

struct Node {
    int value;
    Node* next;
    int unused[3];
    Key key;
};

struct Bucket {
    Node* first;
    int unused;
};

struct Level {
    int unused[3];
    Bucket* begin;
    Bucket* end;
    Bucket* capacity;
};

struct Output {
    int* data;
    int size;
    int capacity;

    void append(const int& value);
    void resize(int count, int fill);
};

struct S {
    int unused[3];
    Level levels[1];

    void find(int level, const Key& key, Output& output);
};

void S::find(int level, const Key& key, Output& output)
{
    unsigned hash =
        (unsigned(key.x) * 0x0466f45dU) ^
        (unsigned(key.y) * 0x0127409fU) ^
        (unsigned(key.z) * 0x04f9ffb7U);

    hash &= 0xffff >> level;

    Level* table = &levels[level];
    if (hash >= unsigned(table->end - table->begin))
        invalid_parameter_noinfo();

    Node* node = table->begin[hash].first;
    while (node) {
        if (node->key.x == key.x &&
            node->key.y == key.y &&
            node->key.z == key.z) {
            if (output.size < output.capacity) {
                int* destination = output.data + output.size;
                if (destination)
                    *destination = node->value;
                ++output.size;
            } else if ((unsigned)node >= (unsigned)output.data &&
                       (unsigned)node < (unsigned)(output.data + output.size)) {
                int value = node->value;
                output.append(value);
            } else {
                output.resize(output.size + 1, 0);
                output.data[output.size - 1] = node->value;
            }
        }
        node = node->next;
    }
}
