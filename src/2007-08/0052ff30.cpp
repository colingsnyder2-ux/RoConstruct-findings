// from server: 57% by colin
// roc 2007-08 0052ff30  unit: RBX::ICameraSubject  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ff30
//
// 0052ff30  56                   push esi
// 0052ff31  6a00                 push 0
// 0052ff33  68c08f8900           push 0x898fc0
// 0052ff38  8bf1                 mov esi, ecx
// 0052ff3a  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0052ff40  684c1f8800           push 0x881f4c
// 0052ff45  6a00                 push 0
// 0052ff47  50                   push eax
// 0052ff48  e8e90d1000           call 0x630d36
// 0052ff4d  83c414               add esp, 0x14
// 0052ff50  85c0                 test eax, eax
// 0052ff52  742f                 je 0x52ff83
// 0052ff54  eb0a                 jmp 0x52ff60
// 0052ff56  8da42400000000       lea esp, [esp]
// 0052ff5d  8d4900               lea ecx, [ecx]
// 0052ff60  8b88bc000000         mov ecx, dword ptr [eax + 0xbc]
// 0052ff66  6a00                 push 0
// 0052ff68  68c08f8900           push 0x898fc0
// 0052ff6d  684c1f8800           push 0x881f4c
// 0052ff72  6a00                 push 0
// 0052ff74  51                   push ecx
// 0052ff75  8bf0                 mov esi, eax
// 0052ff77  e8ba0d1000           call 0x630d36
// 0052ff7c  83c414               add esp, 0x14
// 0052ff7f  85c0                 test eax, eax
// 0052ff81  75dd                 jne 0x52ff60
// 0052ff83  8bc6                 mov eax, esi
// 0052ff85  5e                   pop esi
// 0052ff86  c3                   ret 

struct Instance {
    Instance* findFirstChildByName(const char*, bool);
};

struct ICameraSubject {
    Instance* getSubject();
};

Instance* ICameraSubject::getSubject()
{
    Instance* result = *(Instance**)((char*)this + 0xbc);
    Instance* found = result->findFirstChildByName("CameraSubject", false);
    while (found) {
        result = found;
        found = found->findFirstChildByName("CameraSubject", false);
    }
    return result;
}
