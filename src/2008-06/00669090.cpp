// from server: 35% by atomic.potato
struct TreeStage {
    void* f(void* a, void* b, void* c, void* d, void* e, void* f);
};

void* helper(void* self, void* a, void* b, void* c, int d);

void* TreeStage::f(void* a, void* b, void* c, void* d, void* e, void* f)
{
    void* esi = a;
    void* edi = b;
    void* ebx = c;
    void* ebp = d;
    void* ecx = e;
    void* eax = f;
    while (ecx != eax) {
        if ((int)ecx > (int)eax) {
            ecx = (char*)ecx - 1;
            esi = helper(this, ebx, ebp, esi, 0);
        } else {
            eax = (char*)eax - 1;
            edi = helper(this, ebx, ebp, edi, 1);
        }
    }
    if (esi != edi) {
        if (esi) {
            esi = helper(this, ebx, ebp, esi, 0);
        } else {
            esi = 0;
        }
        if (edi) {
            edi = helper(this, ebx, ebp, edi, 1);
            e = (char*)e - 1;
            f = (char*)f - 1;
        } else {
            e = (char*)e - 1;
            f = (char*)f - 1;
            edi = 0;
        }
    }
    return 0;
}
