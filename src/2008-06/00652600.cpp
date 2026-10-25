// from server: 100% by king_originala
// roc 2008-06 00652600  unit: RBX::ScoreHud  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00652600
//
// 00652600  56                   push esi
// 00652601  57                   push edi
// 00652602  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00652606  8bf1                 mov esi, ecx
// 00652608  85ff                 test edi, edi
// 0065260a  7409                 je 0x652615
// 0065260c  8bcf                 mov ecx, edi
// 0065260e  e86d06e0ff           call 0x452c80
// 00652613  eb02                 jmp 0x652617
// 00652615  33c0                 xor eax, eax
// 00652617  89864c010000         mov dword ptr [esi + 0x14c], eax
// 0065261d  85ff                 test edi, edi
// 0065261f  7412                 je 0x652633
// 00652621  8bcf                 mov ecx, edi
// 00652623  e8a8ffdbff           call 0x4125d0
// 00652628  5f                   pop edi
// 00652629  898650010000         mov dword ptr [esi + 0x150], eax
// 0065262f  5e                   pop esi
// 00652630  c20800               ret 8
// 00652633  33c0                 xor eax, eax
// 00652635  5f                   pop edi
// 00652636  898650010000         mov dword ptr [esi + 0x150], eax
// 0065263c  5e                   pop esi
// 0065263d  c20800               ret 8

struct Source {
    int first();
    int second();
};

struct ScoreHud {
    char padding[0x14c];
    int firstValue;
    int secondValue;

    void update(int unused, Source* source);
};

void ScoreHud::update(int unused, Source* source)
{
    firstValue = source ? source->first() : 0;
    secondValue = source ? source->second() : 0;
}
