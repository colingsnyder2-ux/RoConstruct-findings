// from server: 100% by tester
// roc 2010-06 00776790  unit: RBX::BallPolyContact  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00776790
//
// 00776790  8bc1                 mov eax, ecx
// 00776792  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00776796  c700d42aa500         mov dword ptr [eax], 0xa52ad4
// 0077679c  8b11                 mov edx, dword ptr [ecx]
// 0077679e  89500c               mov dword ptr [eax + 0xc], edx
// 007767a1  8b5104               mov edx, dword ptr [ecx + 4]
// 007767a4  895010               mov dword ptr [eax + 0x10], edx
// 007767a7  8b4908               mov ecx, dword ptr [ecx + 8]
// 007767aa  8b542404             mov edx, dword ptr [esp + 4]
// 007767ae  894814               mov dword ptr [eax + 0x14], ecx
// 007767b1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007767b5  895004               mov dword ptr [eax + 4], edx
// 007767b8  894808               mov dword ptr [eax + 8], ecx
// 007767bb  c20c00               ret 0xc

struct BallPolyContact
{
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    BallPolyContact(int, int, int*);
};

BallPolyContact::BallPolyContact(int a, int b, int* c)
{
    v0 = 0xabd5d0;
    v3 = c[0];
    v4 = c[1];
    v5 = c[2];
    v1 = a;
    v2 = b;
}
