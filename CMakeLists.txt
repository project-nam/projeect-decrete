cmake_minimum_required(VERSION 3.21)
project(projeect_decrete)

set(CMAKE_CXX_STANDARD 14)

include_directories(matrix)

add_executable(projeect_decrete
        .history/exercise6_20220913130719.cpp
        .history/exercise6_20220913130728.cpp
        .history/exercise6_20220913130736.cpp
        .history/exercise6_20220913130743.cpp
        .history/exercise6_20220913130753.cpp
        .history/exercise6_20220913130758.cpp
        .history/exercise6_20220913130800.cpp
        .history/exercise6_20220913130804.cpp
        .history/exercise6_20220913130807.cpp
        .history/exercise6_20220913130829.cpp
        .history/exercise6_20220913130836.cpp
        .history/exercise6_20220913130839.cpp
        .history/exercise6_20220913130847.cpp
        .history/exercise6_20220913130849.cpp
        .history/exercise6_20220913130852.cpp
        .history/exercise6_20220913130858.cpp
        .history/exercise6_20220913130900.cpp
        .history/exercise6_20220913130905.cpp
        .history/exercise6_20220913130909.cpp
        .history/exercise6_20220913130912.cpp
        .history/exercise6_20220913130919.cpp
        .history/exercise6_20220913130923.cpp
        .history/exercise6_20220913130937.cpp
        .history/exercise6_20220913130940.cpp
        .history/exercise6_20220913130944.cpp
        .history/exercise6_20220913130949.cpp
        .history/exercise6_20220913130951.cpp
        .history/exercise7_20220913131011.cpp
        .history/exercise7_20220913131021.cpp
        .history/exercise7_20220913131023.cpp
        .history/exercise7_20220913131324.cpp
        .history/exercise7_20220913131326.cpp
        .history/exercise7_20220913131336.cpp
        .history/exercise7_20220913131344.cpp
        .history/exercise7_20220913131348.cpp
        .history/exercise7_20220913131352.cpp
        .history/exercise7_20220913131404.cpp
        .history/exercise7_20220913131418.cpp
        .history/exercise7_20220913131420.cpp
        .history/exercise7_20220913131429.cpp
        .history/exercise7_20220913131431.cpp
        .history/exercise7_20220913131435.cpp
        .history/exercise7_20220913131442.cpp
        .history/exercise7_20220913131444.cpp
        .history/exercise7_20220913131449.cpp
        .history/exercise7_20220913131451.cpp
        .history/exercise7_20220913131453.cpp
        .history/exercise7_20220913131503.cpp
        .history/exercise7_20220913131507.cpp
        .history/exercise7_20220913131513.cpp
        .history/exercise7_20220913131514.cpp
        .history/exercise7_20220913131519.cpp
        .history/exercise7_20220913131523.cpp
        .history/exercise7_20220913131527.cpp
        .history/exercise7_20220913131532.cpp
        .history/exercise7_20220913131534.cpp
        .history/exercise7_20220913131535.cpp
        .history/exercise7_20220913131545.cpp
        .history/exercise7_20220913131547.cpp
        .history/exercise7_20220913131652.cpp
        .history/exercise7_20220913131654.cpp
        .history/exercise7_20220913131656.cpp
        .history/exercise7_20220913131657.cpp
        .history/exercise7_20220913131700.cpp
        .history/exercise7_20220913131705.cpp
        .history/exercise7_20220913131707.cpp
        .history/exercise7_20220913131710.cpp
        .history/exercise7_20220913131714.cpp
        .history/exercise7_20220913131724.cpp
        .history/exercise7_20220913131728.cpp
        .history/exercise7_20220913131731.cpp
        .history/exercise7_20220913131740.cpp
        .history/exercise7_20220913131743.cpp
        .history/exercise7_20220913131747.cpp
        .history/exercise7_20220913132447.cpp
        .history/exercise7_20220913132455.cpp
        .history/exercise7_20220913132514.cpp
        .history/exercise7_20220913132517.cpp
        .history/exercise7_20220913132518.cpp
        .history/exercise7_20220913132529.cpp
        .history/exercise7_20220913132533.cpp
        .history/exercise7_20220913132541.cpp
        .history/exercise7_20220913132542.cpp
        .history/exercise7_20220913132544.cpp
        .history/exercise7_20220913132545.cpp
        .history/exercise7_20220913132556.cpp
        .history/exercise7_20220913132559.cpp
        .history/exercise7_20220913132601.cpp
        .history/exercise7_20220913132603.cpp
        .history/exercise7_20220913132606.cpp
        .history/exercise7_20220913132611.cpp
        .history/exercise7_20220913132613.cpp
        .history/exercise7_20220913132617.cpp
        .history/exercise7_20220913132622.cpp
        .history/exercise7_20220913132625.cpp
        .history/exercise7_20220913132631.cpp
        .history/exercise7_20220913132642.cpp
        .history/exercise7_20220913132702.cpp
        .history/exercise7_20220913132712.cpp
        .history/exercise7_20220913132720.cpp
        .history/exercise7_20220913132722.cpp
        .history/exercise7_20220913132724.cpp
        .history/exercise7_20220913132727.cpp
        .history/exercise_20220913123017.cpp
        .history/exercise_20220913123030.cpp
        .history/exercise_20220913123038.cpp
        .history/exercise_20220913123202.cpp
        .history/exercise_20220913123550.cpp
        .history/exercise_20220913123601.cpp
        .history/exercise_20220913123604.cpp
        .history/exercise_20220913123607.cpp
        .history/exercise_20220913123610.cpp
        .history/exercise_20220913123614.cpp
        .history/exercise_20220913123616.cpp
        .history/exercise_20220913123629.cpp
        .history/exercise_20220913123631.cpp
        .history/exercise_20220913123635.cpp
        .history/exercise_20220913123637.cpp
        .history/exercise_20220913123640.cpp
        .history/exercise_20220913123644.cpp
        .history/exercise_20220913123648.cpp
        .history/exercise_20220913123705.cpp
        .history/exercise_20220913123713.cpp
        .history/exercise_20220913123715.cpp
        .history/exercise_20220913123733.cpp
        .history/exercise_20220913123735.cpp
        .history/exercise_20220913123738.cpp
        .history/exercise_20220913123803.cpp
        .history/exercise_20220913123808.cpp
        .history/exercise_20220913123810.cpp
        .history/exercise_20220913123828.cpp
        .history/exercise_20220913123838.cpp
        .history/exercise_20220913123910.cpp
        .history/exercise_20220913123915.cpp
        .history/exercise_20220913123924.cpp
        .history/exercise_20220913123926.cpp
        .history/exercise_20220913123928.cpp
        .history/exercise_20220913123933.cpp
        .history/exercise_20220913124112.cpp
        .history/exercise_20220913124118.cpp
        .history/exercise_20220913124125.cpp
        .history/exercise_20220913124129.cpp
        .history/exercise_20220913124212.cpp
        .history/exercise_20220913124218.cpp
        .history/exercise_20220913124221.cpp
        .history/exercise_20220913124222.cpp
        .history/exercise_20220913124226.cpp
        .history/exercise_20220913124238.cpp
        .history/exercise_20220913124239.cpp
        .history/exercise_20220913124241.cpp
        .history/exercise_20220913124246.cpp
        .history/exercise_20220913124247.cpp
        .history/exercise_20220913124251.cpp
        .history/exercise_20220913124255.cpp
        .history/exercise_20220913124303.cpp
        .history/exercise_20220913124316.cpp
        .history/exercise_20220913124318.cpp
        .history/exercise_20220913124322.cpp
        .history/exercise_20220913124323.cpp
        .history/exercise_20220913124326.cpp
        .history/exercise_20220913124431.cpp
        .history/exercise_20220913124434.cpp
        .history/exercise_20220913124443.cpp
        .history/exercise_20220913124447.cpp
        .history/exercise_20220913124449.cpp
        .history/exercise_20220913124451.cpp
        .history/exercise_20220913124503.cpp
        .history/exercise_20220913124537.cpp
        .history/exercise_20220913124543.cpp
        .history/exercise_20220913124612.cpp
        .history/exercise_20220913124619.cpp
        .history/exercise_20220913124628.cpp
        .history/exercise_20220913124636.cpp
        .history/exercise_20220913124638.cpp
        .history/exercise_20220913124643.cpp
        .history/exercise_20220913124646.cpp
        .history/exercise_20220913124648.cpp
        .history/exercise_20220913124650.cpp
        .history/exercise_20220913124652.cpp
        .history/exercise_20220913124705.cpp
        .history/exercise_20220913124714.cpp
        .history/exercise_20220913124723.cpp
        .history/exercise_20220913124725.cpp
        .history/exercise_20220913130311.cpp
        .history/exercise_20220913130506.cpp
        combination/exercise.cpp
        combination/exercise1.cpp
        combination/exercise2.cpp
        combination/exercise3.cpp
        combination/exercise6.cpp
        combination/exercise7.cpp
        combination/exercise8.cpp
        matrix/exercise1.cpp
        matrix/main.cpp
        matrix/Matrix.cpp
        matrix/Matrix.h)
