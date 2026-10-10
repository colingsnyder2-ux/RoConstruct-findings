// from server: 55% by colin
// roc 2007-08 005dfcd0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dfcd0

extern "C" void __cdecl sub_5df580(int*, int*, int*);
extern "C" void __cdecl sub_5def20(int*, int*, int, int);
extern "C" void __cdecl sub_5def60(int*, int*, int);
extern "C" void __cdecl sub_5dfa70(int*, int*);
extern "C" void __cdecl sub_5dfcd0(int*, int*, int);

void __cdecl sub_5dfcd0(int* first, int* last, int depth)
{
    int count = (int)(last - first) >> 2;
    while (count > 0x20) {
        if (depth <= 0) {
            if (count > 0x20) {
                int bytes = (int)((char*)last - (char*)first) & 0xfffffffc;
                if (bytes > 4) {
                    sub_5def20(first, last, 0, 0);
                }
            }
            sub_5dfa70(first, last);
            return;
        }
        int pivot[2];
        sub_5df580(pivot, first, last);
        int* mid = first + (count >> 1);
        int* p = pivot;
        int* a = first;
        int* b = last;
        int* m = mid;
        int leftBytes = (int)((char*)last - (char*)m) & 0xfffffffc;
        int rightBytes = (int)((char*)m - (char*)first) & 0xfffffffc;
        int half = depth;
        half = half - (half >> 31);
        half >>= 1;
        int newDepth = half + (half >> 31);
        newDepth >>= 1;
        if (rightBytes < leftBytes) {
            sub_5dfcd0(first, m, newDepth);
            first = m;
        } else {
            sub_5dfcd0(m, last, newDepth);
            last = m;
        }
        count = (int)(last - first) >> 2;
    }
    if (count > 1) {
        sub_5def60(first, last, 0);
    }
}
