// from server: 36% by colin
struct Bucket {
    float sampleTimeElapsed;
    float wallTimeSpan;
    int frames;
    Bucket();
};

struct Profiler {
    Bucket getWindow(double window) const;
};

Bucket::Bucket() {
    Profiler p;
    p.getWindow(0.0);
}
