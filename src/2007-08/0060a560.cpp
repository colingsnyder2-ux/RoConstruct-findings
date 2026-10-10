// from server: 72% by colin
struct MultiJoint {
    char pad0[0x88];
    int numConnector;
    char pad1[0x04];
    void* point[8];
    char pad2[0x04];

    void clear();
};

extern "C" void* __stdcall sub_5A4760(void*);
extern "C" void __stdcall sub_5A4BF0(void*, int, int);
extern "C" void __stdcall sub_5CF9D0(void*);
extern "C" void* __stdcall sub_609150(void*, void*);
extern "C" void __stdcall sub_609160(void*);

void MultiJoint::clear()
{
    int i = 0;
    if (numConnector > 0) {
        void** p = point;
        void** q = (void**)((char*)this + 0xac);
        do {
            sub_5CF9D0(sub_609150(this, p[-1]));
            sub_5CF9D0(sub_609150(this, p[0]));
            p[-1] = 0;
            p[0] = 0;
            void* v = *q;
            void* r = sub_609150(this, 0);
            sub_5A4BF0((char*)r + 0x10, 0, 0);
            {
                void* a = sub_5A4760((char*)v + 0x34);
                int idx = *(int*)a;
                int* arr = (int*)sub_5A4760((char*)v + 0x34);
                int cnt = arr[1];
                int val = *(int*)(idx + cnt * 4 - 4);
                *(int*)(idx + val * 4) = val;
                *(int*)sub_5A4760((char*)v + 0x34) = idx;
                int cnt2 = ((int*)sub_5A4760((char*)v + 0x34))[1];
                sub_5A4BF0(sub_5A4760((char*)v + 0x34), cnt2 - 1, 0);
                *(int*)sub_5A4760((char*)v + 0x34) = -1;
            }
            if (*q) {
                void** vt = *(void***)*q;
                ((void (__stdcall*)(int))vt[0])(1);
            }
            *q = 0;
            i++;
            q++;
            p += 2;
        } while (i < numConnector);
    }
    numConnector = 0;
    sub_609160(this);
}
