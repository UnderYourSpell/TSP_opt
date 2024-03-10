# Given points
import matplotlib.pyplot as plt

points = [
    [ 467,  41], [ 500, 334], [ 724, 169], [ 358, 478], [ 464, 962], [ 145, 705], [ 827, 281], [ 491, 961], [ 942, 995], [ 436, 827],
    [ 604, 391], [ 153, 902], [ 382, 292], [ 716, 421], [ 895, 718], [ 726, 447], [ 538, 771], [ 912, 869], [ 299, 667], [ 894,  35],
    [ 811, 703], [ 333, 322], [ 664, 673], [ 711, 141], [ 868, 253], [ 644, 547], [ 757, 662], [ 859,  37], [ 741, 723], [ 778, 529],
    [  35, 316], [ 842, 190], [ 106, 288], [ 942,  40], [ 648, 264], [ 805, 446], [ 729, 890], [ 350, 370], [ 101,   6], [ 548, 393],
    [ 623, 629], [ 954,  84], [ 840, 756], [ 376, 966], [ 308, 931], [ 439, 944], [ 323, 626], [ 538, 537], [  82, 118], [ 541, 929],
    [ 115, 833], [ 658, 639], [ 930, 704], [ 306, 977], [ 386, 673], [ 745,  21], [  72, 924], [ 829, 270], [ 573, 777], [ 512,  97],
    [ 290, 986], [ 636, 161], [ 767, 355], [ 574, 655], [  52,  31], [ 150, 350], [ 724, 941], [ 430, 966], [ 191, 107], [ 337,   7],
    [ 287, 457], [ 383, 753], [ 909, 945], [ 758, 209], [ 588, 221], [ 946, 422], [  30, 506], [ 168, 413], [ 591, 900], [ 655, 762],
    [ 359, 410], [ 537, 624], [ 483, 548], [  41, 595], [ 350, 602], [ 836, 291], [  20, 374], [  21, 596], [ 199, 348], [ 484, 668],
    [ 734, 281], [ 999,  53], [ 938, 418], [ 788, 900], [ 467, 127], [ 893, 728], [ 483, 648], [ 421, 807], [ 617, 310], [ 514, 813]
]

# Extract x and y coordinates
x_coordinates, y_coordinates = zip(*points)

# Create a scatter plot
plt.plot(x_coordinates, y_coordinates, color='blue', marker='o')
plt.title('Scatter Plot of Given Points')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.grid(True)
plt.show()

points = [[ 467,  41], [ 337,   7], [ 191, 107], [ 101,   6], [  52,  31], [  82, 118], [ 106, 288], [ 150, 350], [  35, 316], [  20, 374],
    [  30, 506], [  21, 596], [  41, 595], [ 168, 413], [ 199, 348], [ 333, 322], [ 382, 292], [ 467, 127], [ 588, 221], [ 648, 264],
    [ 617, 310], [ 604, 391], [ 548, 393], [ 500, 334], [ 350, 370], [ 359, 410], [ 287, 457], [ 358, 478], [ 350, 602], [ 323, 626],
    [ 299, 667], [ 145, 705], [ 115, 833], [  72, 924], [ 153, 902], [ 290, 986], [ 306, 977], [ 308, 931], [ 376, 966], [ 430, 966],
    [ 439, 944], [ 464, 962], [ 491, 961], [ 541, 929], [ 591, 900], [ 514, 813], [ 436, 827], [ 383, 753], [ 386, 673], [ 421, 807],
    [ 538, 771], [ 573, 777], [ 655, 762], [ 729, 890], [ 724, 941], [ 788, 900], [ 909, 945], [ 942, 995], [ 912, 869], [ 840, 756],
    [ 893, 728], [ 930, 704], [ 895, 718], [ 811, 703], [ 757, 662], [ 741, 723], [ 664, 673], [ 574, 655], [ 484, 668], [ 483, 648],
    [ 483, 548], [ 538, 537], [ 537, 624], [ 623, 629], [ 658, 639], [ 644, 547], [ 778, 529], [ 946, 422], [ 938, 418], [ 805, 446],
    [ 726, 447], [ 716, 421], [ 767, 355], [ 836, 291], [ 868, 253], [ 829, 270], [ 827, 281], [ 734, 281], [ 724, 169], [ 758, 209],
    [ 842, 190], [ 954,  84], [ 999,  53], [ 942,  40], [ 894,  35], [ 859,  37], [ 745,  21], [ 711, 141], [ 636, 161], [ 512,  97]]

plt.plot(x_coordinates, y_coordinates, color='blue', marker='o')
plt.title('Scatter Plot of Given Points')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.grid(True)
plt.show()