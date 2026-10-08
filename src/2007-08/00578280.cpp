// from server: 79% by colin
// roc 2007-08 00578280  unit: RBX::VPartInstance::?$FactoryProduct  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578280
//
// 00578280  56                   push esi
// 00578281  8bf1                 mov esi, ecx
// 00578283  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 00578289  80797000             cmp byte ptr [ecx + 0x70], 0
// 0057828d  750a                 jne 0x578299
// 0057828f  80797200             cmp byte ptr [ecx + 0x72], 0
// 00578293  7404                 je 0x578299
// 00578295  b201                 mov dl, 1
// 00578297  eb02                 jmp 0x57829b
// 00578299  32d2                 xor dl, dl
// 0057829b  8b442408             mov eax, dword ptr [esp + 8]
// 0057829f  3ac2                 cmp al, dl
// 005782a1  7412                 je 0x5782b5
// 005782a3  50                   push eax
// 005782a4  e8f7c50300           call 0x5b48a0
// 005782a9  682c288c00           push 0x8c282c
// 005782ae  8bce                 mov ecx, esi
// 005782b0  e85bc4ecff           call 0x444710
// 005782b5  5e                   pop esi
// 005782b6  c20400               ret 4

struct VPartInstance {
    char pad[0x1d8];
    void* field1d8;
    void setSomething(char);
};

void __stdcall sub_5b48a0(char);
void __fastcall sub_444710(VPartInstance*, int, const char*);

void VPartInstance::setSomething(char value) {
    char* p = (char*)field1d8;
    char dl;
    if (p[0x70] == 0 && p[0x72] != 0) {
        dl = 1;
    } else {
        dl = 0;
    }
    if (value != dl) {
        sub_5b48a0(value);
        sub_444710(this, 0, (const char*)0x8c282c);
    }
}
