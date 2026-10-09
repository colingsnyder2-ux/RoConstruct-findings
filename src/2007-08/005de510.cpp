// from server: 81% by colin
// roc 2007-08 005de510  unit: RBX::VMotorFeature  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005de510

extern "C" void __cdecl sub_5de130(int* a, int b, int c, int d);

void __cdecl sub_5de510(int* arr, int start, int end, int extra)
{
    int i = start;
    int child = i + i + 2;
    if (child < end) {
        do {
            int v = arr[child];
            if (v < arr[child - 1])
                child = child - 1;
            arr[i] = arr[child];
            i = child;
            child = child + child + 2;
        } while (child < end);
    }
    if (child == end) {
        arr[i] = arr[end - 1];
        i = end - 1;
    }
    sub_5de130(arr, i, start, extra);
}
