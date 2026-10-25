// from server: 71% by king_originala_sol_native
// from server: 69% by colin
// roc 2008-06 0065a5d0  unit: RBX::BallBallContact  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065a5d0
//
// 0065a5d0  83ec14               sub esp, 0x14
// 0065a5d3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0065a5d7  8b10                 mov edx, dword ptr [eax]
// 0065a5d9  3b500c               cmp edx, dword ptr [eax + 0xc]
// 0065a5dc  890c24               mov dword ptr [esp], ecx
// 0065a5df  89542404             mov dword ptr [esp + 4], edx
// 0065a5e3  0f8ff7000000         jg 0x65a6e0
// 0065a5e9  53                   push ebx
// 0065a5ea  55                   push ebp
// 0065a5eb  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0065a5ef  56                   push esi
// 0065a5f0  57                   push edi
// 0065a5f1  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0065a5f5  eb09                 jmp 0x65a600
// 0065a5f7  8da42400000000       lea esp, [esp]
// 0065a5fe  8bff                 mov edi, edi
// 0065a600  8b5804               mov ebx, dword ptr [eax + 4]
// 0065a603  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0065a606  0f8fc2000000         jg 0x65a6ce
// 0065a60c  8d642400             lea esp, [esp]
// 0065a610  8b7008               mov esi, dword ptr [eax + 8]
// 0065a613  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0065a616  0f8fa8000000         jg 0x65a6c4
// 0065a61c  89542418             mov dword ptr [esp + 0x18], edx
// 0065a620  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0065a624  3b17                 cmp edx, dword ptr [edi]
// 0065a626  89742420             mov dword ptr [esp + 0x20], esi
// 0065a62a  7c1d                 jl 0x65a649
// 0065a62c  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0065a62f  7c18                 jl 0x65a649
// 0065a631  3b7708               cmp esi, dword ptr [edi + 8]
// 0065a634  7c13                 jl 0x65a649
// 0065a636  3b570c               cmp edx, dword ptr [edi + 0xc]
// 0065a639  7f0e                 jg 0x65a649
// 0065a63b  3b5f10               cmp ebx, dword ptr [edi + 0x10]
// 0065a63e  7f09                 jg 0x65a649
// 0065a640  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0065a643  7f04                 jg 0x65a649
// 0065a645  b101                 mov cl, 1
// 0065a647  eb02                 jmp 0x65a64b
// 0065a649  32c9                 xor cl, cl
// 0065a64b  3b5500               cmp edx, dword ptr [ebp]
// 0065a64e  7c1d                 jl 0x65a66d
// 0065a650  3b5d04               cmp ebx, dword ptr [ebp + 4]
// 0065a653  7c18                 jl 0x65a66d
// 0065a655  3b7508               cmp esi, dword ptr [ebp + 8]
// 0065a658  7c13                 jl 0x65a66d
// 0065a65a  3b550c               cmp edx, dword ptr [ebp + 0xc]
// 0065a65d  7f0e                 jg 0x65a66d
// 0065a65f  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 0065a662  7f09                 jg 0x65a66d
// 0065a664  3b7514               cmp esi, dword ptr [ebp + 0x14]
// 0065a667  7f04                 jg 0x65a66d
// 0065a669  b001                 mov al, 1
// 0065a66b  eb02                 jmp 0x65a66f
// 0065a66d  32c0                 xor al, al
// 0065a66f  84c9                 test cl, cl
// 0065a671  741e                 je 0x65a691
// 0065a673  84c0                 test al, al
// 0065a675  753f                 jne 0x65a6b6
// 0065a677  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0065a67b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0065a67f  8d442418             lea eax, [esp + 0x18]
// 0065a683  50                   push eax
// 0065a684  51                   push ecx
// 0065a685  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065a689  52                   push edx
// 0065a68a  e891fbffff           call 0x65a220
// 0065a68f  eb21                 jmp 0x65a6b2
// 0065a691  84c0                 test al, al
// 0065a693  7421                 je 0x65a6b6
// 0065a695  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0065a699  8d442418             lea eax, [esp + 0x18]
// 0065a69d  50                   push eax
// 0065a69e  51                   push ecx
// 0065a69f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065a6a3  e8e8f1ffff           call 0x659890
// 0065a6a8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065a6ac  50                   push eax
// 0065a6ad  e8cef9ffff           call 0x65a080
// 0065a6b2  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065a6b6  8b442430             mov eax, dword ptr [esp + 0x30]
// 0065a6ba  46                   inc esi
// 0065a6bb  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0065a6be  0f8e60ffffff         jle 0x65a624
// 0065a6c4  43                   inc ebx
// 0065a6c5  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0065a6c8  0f8e42ffffff         jle 0x65a610
// 0065a6ce  42                   inc edx
// 0065a6cf  3b500c               cmp edx, dword ptr [eax + 0xc]
// 0065a6d2  89542414             mov dword ptr [esp + 0x14], edx
// 0065a6d6  0f8e24ffffff         jle 0x65a600
// 0065a6dc  5f                   pop edi
// 0065a6dd  5e                   pop esi
// 0065a6de  5d                   pop ebp
// 0065a6df  5b                   pop ebx
// 0065a6e0  83c414               add esp, 0x14
// 0065a6e3  c21400               ret 0x14

// from server: 68% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
#include <intrin.h>
struct Point {
    int x, y, z;
};

struct Box {
    Point min;
    Point max;
    bool contains(const Point& p)const{return p.x>=min.x&&p.y>=min.y&&p.z>=min.z&&p.x<=max.x&&p.y<=max.y&&p.z<=max.z;}
};

struct S {
    void update(void *a, void *b, const Box *range,
                const Box *oldBox, const Box *newBox);
    void insert(void *a, void *b, const Point *point);
    void *find(void *b, const Point *point);
    void remove(void *entry);
};

void S::update(void *a, void *b, const Box *range,
               const Box *oldBox, const Box *newBox)
{
    for (int x = range->min.x; x <= range->max.x; ++x) {
        for (int y = range->min.y; y <= range->max.y; ++y) {
            for (int z = range->min.z; z <= range->max.z; ++z) {
                Point point;
                point.x = x;
                point.y = y;
                _ReadWriteBarrier();
                point.z = z;

                bool inNew=newBox->contains(point);
                bool inOld=oldBox->contains(point);

                if (inNew) {
                    if (!inOld)
                        insert(a, b, &point);
                } else if (inOld) {
                    remove(find(b, &point));
                }
            }
        }
    }
}
