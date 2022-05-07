class Led {
    private:
        struct RGB {
            int r;
            int g;
            int b;
        };
        int brightness = 0;
        int pixelIndex;
        int controlIndex;
    public:
        Led();
        void setColor();
        void setBrightness();
        
};
