// from server: 55% by colin
// roc 2007-08 0059efe0  unit: RBX::BackpackItem  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059efe0
//
// 0059efe0  56                   push esi
// 0059efe1  8bf1                 mov esi, ecx
// 0059efe3  e858fcffff           call 0x59ec40
// 0059efe8  c7066c207b00         mov dword ptr [esi], 0x7b206c
// 0059efee  c7460460207b00       mov dword ptr [esi + 4], 0x7b2060
// 0059eff5  c7461058207b00       mov dword ptr [esi + 0x10], 0x7b2058
// 0059effc  c7461448207b00       mov dword ptr [esi + 0x14], 0x7b2048
// 0059f003  c7462c38207b00       mov dword ptr [esi + 0x2c], 0x7b2038
// 0059f00a  c7464428207b00       mov dword ptr [esi + 0x44], 0x7b2028
// 0059f011  c7465c18207b00       mov dword ptr [esi + 0x5c], 0x7b2018
// 0059f018  c7467408207b00       mov dword ptr [esi + 0x74], 0x7b2008
// 0059f01f  c7868c000000f81f7b00 mov dword ptr [esi + 0x8c], 0x7b1ff8
// 0059f029  c786e8000000f01f7b00 mov dword ptr [esi + 0xe8], 0x7b1ff0
// 0059f033  8bc6                 mov eax, esi
// 0059f035  5e                   pop esi
// 0059f036  c3                   ret 

struct BackpackItem {
    void construct();
};

void BackpackItem::construct() {
    char* base = (char*)this;
    *(int*)(base + 0x00) = 0x7b206c;
    *(int*)(base + 0x04) = 0x7b2060;
    *(int*)(base + 0x10) = 0x7b2058;
    *(int*)(base + 0x14) = 0x7b2048;
    *(int*)(base + 0x2c) = 0x7b2038;
    *(int*)(base + 0x44) = 0x7b2028;
    *(int*)(base + 0x5c) = 0x7b2018;
    *(int*)(base + 0x74) = 0x7b2008;
    *(int*)(base + 0x8c) = 0x7b1ff8;
    *(int*)(base + 0xe8) = 0x7b1ff0;
}
